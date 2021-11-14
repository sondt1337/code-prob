/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float goc;
    float m, n;
    cin >> m >> n;
    float x = m * 60;
    float tong = x + n;
    float conga = abs(n * 12 - tong) * 1 / 2;
    if (conga < 180)
        cout << setprecision(1) << fixed << conga;
    if (conga >= 180)
        cout << setprecision(1) << fixed << 360 - conga;

    return 0;
}