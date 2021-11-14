/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
#define For(i, x, y) for (int i = x; i <= y; i++)
#define Fod(i, x, y) for (int i = x; i >= y; i--)
using namespace std;
int n;
int A[nmax], F[nmax];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    For(i, 1, n)
    {
        cin >> A[i];
        F[i] = F[i - 1] + (A[i] == 2);
    }
    int cnt = 0;
    int res = F[n];
    Fod(i, n, 1)
    {
        cnt += (A[i] == 1);
        res = min(res, F[i - 1] + cnt);
    }
    cout << res;
}