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
    int n;
    int a[1000];
    int tongsua = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= i)
        {
            tongsua += a[i] - i;
        }
        if (a[i] < i)
        {
            tongsua += 0;
        }
    }
    cout << tongsua;
}