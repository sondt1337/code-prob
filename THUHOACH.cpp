/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include "bits/stdc++.h"
using namespace std;
int n, rs = 0, C;
int a[20];

void find(int c, int i)
{
    rs = max(rs, c);
    while (i < n && c + a[i] <= C)
    {
        find(c + a[i], i + 1);
        ++i;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> C;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    find(0, 0);
    cout << rs;
}