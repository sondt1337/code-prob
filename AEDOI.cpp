/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long count1 = 1, count2 = 1;
    int n = sqrt(a), m = sqrt(b);
    for (int i = 2; i <= n; i++)
    {
        if (a % i == 0)
        {
            count1 = count1 + i + a / i;
        }
    }

    for (int i = 2; i <= m; i++)
    {
        if (b % i == 0)
        {
            count2 = count2 + i + b / i;
        }
    }
    if (count1 == b || count2 == a)
        cout << "YES";
    else
        cout << "NO";
}