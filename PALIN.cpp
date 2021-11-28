#include "bits/stdc++.h"

using namespace std;

string s;
int f[2001][2001];

int main() {
    cin >> s;
    int n = s.size();

    for (int i = n - 1; i >= 0; --i) {
        f[i][i] = 1;
        for (int j = i + 1; j < n; ++j) {
            if (s[i] != s[j])
                f[i][j] = max(f[i + 1][j], f[i][j - 1]);
            else
                f[i][j] = f[i + 1][j - 1] + 2;
        }
    }

    cout << f[0][n - 1];
}
