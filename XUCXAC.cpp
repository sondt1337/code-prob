/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
using namespace std;
#define nmax 101
#define oo 1000000001
int n, m, f[nmax][nmax][7][7][7], b[nmax][nmax];
int xs, ys, xe, ye;
struct label
{
    int x, y, fro, top, right;
    int val;
};
struct cmp
{
    bool operator()(label &a, label &b) { return a.val > b.val; }
};
void enter()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> b[i][j];
    cin >> xs >> ys >> xe >> ye;
}
label W(label u)
{
    label v;
    v.x = u.x - 1;
    v.y = u.y;
    v.fro = 7 - u.top;
    v.top = u.fro;
    v.right = u.right;
    int tmp = 7 - u.fro;
    v.val = u.val + tmp * b[v.x][v.y];
    return v;
}
label A(label u)
{
    label v;
    v.x = u.x;
    v.y = u.y + 1;
    v.fro = u.fro;
    v.top = 7 - u.right;
    v.right = u.top;
    int tmp = u.right;
    v.val = u.val + tmp * b[v.x][v.y];
    return v;
}
label S(label u)
{
    label v;
    v.x = u.x + 1;
    v.y = u.y;
    v.fro = u.top;
    v.top = 7 - u.fro;
    v.right = u.right;
    int tmp = u.fro;
    v.val = u.val + tmp * b[v.x][v.y];
    return v;
}
label D(label u)
{
    label v;
    v.x = u.x;
    v.y = u.y - 1;
    v.fro = u.fro;
    v.top = u.right;
    v.right = 7 - u.top;
    int tmp = 7 - u.right;
    v.val = u.val + tmp * b[v.x][v.y];
    return v;
}
bool relax(label v)
{
    if (v.val < f[v.x][v.y][v.fro][v.top][v.right])
    {
        f[v.x][v.y][v.fro][v.top][v.right] = v.val;
        return 1;
    }
    else
        return 0;
}

void Dijkstra()
{
    int ans = oo;
    priority_queue<label, vector<label>, cmp> q;
    q.push({xs, ys, 1, 2, 3, 5 * b[xs][ys]});
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int fro = 1; fro <= 6; fro++)
                for (int top = 1; top <= 6; top++)
                    for (int right = 1; right <= 6; right++)
                        f[i][j][fro][top][right] = oo;
    f[xs][ys][1][2][3] = 5 * b[xs][ys];
    while (!q.empty())
    {
        label u = q.top();
        q.pop();
        if (u.val != f[u.x][u.y][u.fro][u.top][u.right])
            continue;
        if (u.x == xe && u.y == ye)
        {
            ans = u.val;
            break;
        }
        label v;
        v = W(u);
        if (relax(v))
            q.push(v);
        v = A(u);
        if (relax(v))
            q.push(v);
        v = S(u);
        if (relax(v))
            q.push(v);
        v = D(u);
        if (relax(v))
            q.push(v);
    }
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    enter();
    Dijkstra();
}