#include "bits/stdc++.h"

#define FOR(x, l, r) for (int x = l; x <= r; ++x)

using namespace std;

const int N = 100 + 10;

int n, m, a[N][N];
int f[N][N];
int rs = INT_MIN;

int main() {
    cin >> n >> m;
    FOR(i, 0, n - 1) FOR(j, 0, m - 1) cin >> a[i][j];

    FOR(j, 0, m - 1) FOR(i, 0, n - 1) {
        if (j == 0)
            f[i][j] = a[i][j];
        else {
            int pre = f[i][j - 1];
            if (i > 0)
                pre = max(pre, f[i - 1][j - 1]);
            if (i < n - 1)
                pre = max(pre, f[i + 1][j - 1]);
            f[i][j] = pre + a[i][j];
        }
        if (j == m - 1)
            rs = max(rs, f[i][j]);
    }

    cout << rs;
}
