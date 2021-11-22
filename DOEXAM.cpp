#include <bits/stdc++.h>
using namespace std;
#define nmax 30
int n, k, d[nmax], maxscore = 0;
void backtrack(int i, int score, int cnt, bool abort) {
    if (cnt >= k || i > n) {
        maxscore = max(maxscore, score);
        return;
    }
    backtrack(i + 1, score + d[i], cnt + 1, 0);
    if (!abort)
        backtrack(i + 1, score, cnt, 1);
}
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> d[i];
    backtrack(1, 0, 0, 0);
    cout << maxscore;
}
