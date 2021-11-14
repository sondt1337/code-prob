/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
#define ii pair<int, int>
#define fi first
#define se second
#define ENDL "\n"
using namespace std;
const int MAX = 2e5 + 6;
int n, m, d[4][MAX], c[4][MAX];
vector<ii> g[MAX];
vector<int> res;
void Dijkstra(int st, int id) {
    for (int i = 1; i <= n; i++) d[id][i] = INT_MAX;
    d[id][st] = 0;
    c[id][st] = 1;
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    pq.push(ii(0, st));
    while (!pq.empty()) {
        int u = pq.top().se, du = pq.top().fi;
        pq.pop();
        if (du != d[id][u])
            continue;
        for (int i = 0; i < g[u].size(); i++) {
            int v = g[u][i].se, uv = g[u][i].fi;
            if (du + uv < d[id][v]) {
                d[id][v] = du + uv;
                c[id][v] = c[id][u];
                pq.push(ii(du + uv, v));
            } else if (du + uv == d[id][v]) {
                c[id][v] += c[id][u];
            }
        }
    }
}
void Solve() {
    vector<int> res;
    for (int i = 1; i <= n; i++) {
        if (d[1][i] + d[2][i] > d[1][n] || c[1][i] * c[2][i] < c[1][n]) {
            res.push_back(i);
        }
    }
    cout << res.size() << ENDL;
    for (int i = 0; i < res.size(); i++) cout << res[i] << ENDL;
}
int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back(ii(w, v));
        g[v].push_back(ii(w, u));
    }
    Dijkstra(1, 1);
    Dijkstra(n, 2);
    Solve();
    return 0;
}