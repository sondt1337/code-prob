#include <bits/stdc++.h>
using namespace std;
int n, m;
int f[2505][2505];
string s1, s2;
int main()
{
    cin >> n >> m;
    cin >> s1;
    cin >> s2;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            if (s1[i - 1] == s2[j - 1])
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
        }
    cout << f[n][m];
    return 0;
}
