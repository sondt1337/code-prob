/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull base = 1000000007;

int n, s, t, k;
int f[30][30005];
int a[35];
string b[35];

int main()
{
    cin >> t;
    a[2] = 1;
    b[8] = "10";
    a[3] = 7;
    b[9] = "18";
    a[6] = 0;
    b[10] = "22";
    a[5] = 2;
    b[11] = "20";
    a[4] = 4;
    b[12] = "28";
    a[7] = 8;
    b[13] = "68";
    b[14] = "88";
    for (int i = 1; i <= t; ++i)
    {
        cin >> n;
        string s, tg, tg1, tg2;
        k = n;
        {
            if (n <= 7)
                if (n == 6)
                    cout << 6;
                else
                    cout << a[n];
            else
            {
                while (n - 7 >= 2 && n > 21)
                {
                    s = char(8 + 48) + s;
                    n -= 7;
                }
                tg1 = "999999";
                if (n <= 14)
                    s = b[n] + s;
                else
                {
                    for (int j = 7; j >= 2; --j)
                        if ((n - j >= 2) && (n - j <= 14))
                        {
                            string tg;
                            tg += char(a[j] + 48);
                            tg = b[n - j] + tg;
                            tg1 = min(tg, tg1);
                        }
                    s = tg1 + s;
                }
                cout << s;
            }
            cout << " ";
            {
                if (k <= 3)
                    cout << a[k] << "\n";
                else
                {
                    if (k % 2 != 0)
                    {
                        cout << a[3];
                        k -= 3;
                    }
                    while (k > 0)
                    {
                        cout << 1;
                        k -= 2;
                    }
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}