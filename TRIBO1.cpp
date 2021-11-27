#include <bits/stdc++.h>
#define maxn 51
#define maxk 25
#define mod ll(1e9 + 7)
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
ll f[maxn];
int main() {
    effective;
    memset(f, 0, sizeof f);
    int n;
    f[0] = f[1] = 0, f[2] = 1;
    for (int i = 3; i < maxn; i++) f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    while (cin >> n) {
        int i = 0;
        while (n > f[i]) i++;
        cout << f[i] << '\n';
    }
}
