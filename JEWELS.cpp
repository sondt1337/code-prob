#include <bits/stdc++.h>
#define F first
#define S second
#define times double stime = clock();
#define gettime cerr << "\nTime executed: " << (clock() - stime) / CLOCKS_PER_SEC * 1000 << "ms.\n";
using namespace std;
typedef long long ll;
typedef double dou;
typedef long double ldou;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
const ll mod = 1000000007; 
int T;
int n, k;
string s, si, ssi;
int z[300005];
void zfun() {
    int l = 0, r = 0, ni = ssi.size();
    z[0] = ni;
    for (int i = 1; i < ni; i++) {
        if (i > r) {
            l = r = i;
            while (r < ni && ssi[r] == ssi[r - l]) r++;
            z[i] = r - l;
            r--;
        } else {
            int k = i - l;
            if (z[k] < r - i + 1) {
                z[i] = z[k];
            } else {
                l = i;
                while (r < ni && ssi[r] == ssi[r - l]) r++;
                z[i] = r - l;
                r--;
            }
        }
    }
}
void process() {
    // cin >> T;
    T = 1;
    while (T--) {
        cin >> n >> k;
        cin >> s;
        for (int i = 1; i <= k; i++) {
            cin >> si;
            ssi = si + s + s;
            zfun();
            bool ok = false;
            for (int j = n; j < 3 * n; j++) {
                if (z[j] >= n) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                cout << "YES\n";
            } else
                cout << "NO\n";
        }
    }
}
int online = 2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (online == 0) {
        freopen("in.inp", "r", stdin);
        freopen("out.out", "w", stdout);
    } else if (online == 1) {
        freopen(".inp", "r", stdin);
        freopen(".out", "w", stdout);
    }
    process();
    return 0;
}
