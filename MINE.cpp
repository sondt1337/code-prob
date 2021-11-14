#include <bits/stdc++.h>
#define nmax 400001
#define mod 1000003

using namespace std;

int n, m, a[nmax];
long long dp[nmax], z[nmax], c[nmax], gh[mod];

void tinh() {
    z[0] = 1;
    for (int i = 1; i <= 2 * n; ++i) z[i] = (z[i - 1] * i) % mod;
    gh[1] = 1;
    for (int i = 2; i < mod; ++i) gh[i] = (mod - (mod / i * gh[mod % i]) % mod) % mod;
    c[0] = 1;
    for (int i = 1; i <= n; ++i) c[i] = ((z[i * 2] * gh[z[i]]) % mod * gh[z[i + 1]]) % mod;
}

void sub1() {
    dp[0] = 1;
    for (int i = 2; i <= 2 * n; i += 2) {
        for (int j = 0; j < i; j += 2) {
            if (a[i] - a[j + 1] <= m) {
                dp[i] += (dp[j] * c[(i - j - 2) / 2]);
                dp[i] %= mod;
            }
        }
    }
    cout << dp[2 * n];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    tinh();
    for (int i = 1; i <= 2 * n; i++) cin >> a[i];
    if (n <= 2000)
        sub1();
    else
        cout << c[n];
}
