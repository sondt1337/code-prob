#include <bits/stdc++.h>
#define f(a, b, c) for (long long c = a; c <= b; c++)
#define maxn 1000001
#define mirota cin
#define nonomiya cout
#define Mirota_Nonomiya main
#define effective            \
    ios::sync_with_stdio(0); \
    mirota.tie(0);           \
    nonomiya.tie(0);
using namespace std;
bool f[maxn];
int Mirota_Nonomiya() {
    effective string s, res = "";
    mirota >> s;
    memset(f, 0, sizeof(f));
    f(0, s.length() - 1, i) {
        if (!f[s[i]])
            res += s[i];
        f[s[i]] = 1;
    }
    cout << res;
}
