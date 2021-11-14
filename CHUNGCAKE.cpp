/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
#define fort(i, a, b) for (int i = a; i <= b; i++)
#define fory(i, a, b) for (int i = a; i >= b; i--)
using namespace std;
int n, v;
int a[1000];
int f[1000][2005];
void fill()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> v;
    fort(i, 1, n) cin >> a[i];
}
void xuly()
{
    fort(j, 0, v) f[0][j] = 0;
    fort(i, 1, n) f[i][0] = 0;
    fort(i, 1, n)
    {
        fort(j, 0, v)
        {
            if (j >= a[i])
                f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + a[i]);
            else
                f[i][j] = f[i - 1][j];
        }
    }
    cout << f[n][v];
}
int main()
{
    fill();
    xuly();
    return 0;
}