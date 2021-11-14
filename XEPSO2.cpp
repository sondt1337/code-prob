
/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll l, r;
int t;
int TRACUU[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
bool chuate = 0;
int chuso = 0;
int A[100] = {};
void enter() { scanf("%d", &t); }
ll check(ll n)
{
    ll s = 0;
    while (n)
    {
        s += TRACUU[n % 10];
        n /= 10;
    }
    return s;
}
void solve()
{
    while (t--)
    {
        ll Min = 99999999, Max = -1;
        scanf("%lld%lld", &l, &r);
        for (ll i = l; i <= r; i++)
        {
            Min = min(Min, check(i));
            Max = max(Max, check(i));
        }
        cout << Min << " " << Max << "\n";
    }
}
int main()
{
    enter();
    solve();
    return 0;
}