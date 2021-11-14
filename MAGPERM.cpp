/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define N 1000111
using namespace std;
int n, k;
int a[N];
bool b[N];
int main()
{
    cin >> n >> k;
    FOR(i, 1, n)
    a[i] = i;

    if (k == 0)
        FOR(i, 1, n)
            cout << a[i] << " ";
    else if (n % 2)
        cout << -1;
    else
    {
        int i = 1;
        while (1)
        {
            if (b[i] == false && i + k <= n)
            {
                swap(a[i], a[i + k]);
                b[i] = true;
                b[i + k] = true;
            }
            else if (b[i] == true)
                i++;
            else
                break;
        }
        if (count(b + 1, b + 1 + n, false))
            cout << -1;
        else
            FOR(i, 1, n)
                cout << a[i] << " ";
    }
}