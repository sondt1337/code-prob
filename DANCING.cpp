/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
#define f(a, b, c) for (ll c = a; c <= b; c++)
#define maxn 1000001
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
long long f[maxn];
void cal()
{
    f[1] = 1;
    f(2, maxn, i) f[i] = f[i - 1] + 2;
}
int main()
{
    effective ll b = 1, r = 0, h, res = 0;
    cin >> h;
    if (h == 3)
        cout << 8 << ' ' << 1;
    else
    {
        cal();
        f(2, h, i)
        {
            if (i == h)
                b += f[i];
            else
            {
                r += f[i - 1];
                b += 2;
            }
        }
        cout << b << ' ' << r;
    }
}