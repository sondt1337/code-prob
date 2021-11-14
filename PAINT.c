#include <stdio.h>
int n, z = 0;
char mp[26];

struct Query {
    short t;
    char x, y;
} q[1000005];

char ans[1000005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &q[i].t);
        scanf(" %c", &q[i].x);
        if (q[i].t == 2) {
            scanf(" %c", &q[i].y);
        } else {
            ++z;
        }
    }

    for (int i = 0; i < 26; ++i) {
        mp[i] = i + 'a';
    }
    for (int i = n; i >= 1; --i) {
        if (q[i].t == 2) {
            mp[q[i].x - 'a'] = mp[q[i].y - 'a'];
        } else {
            ans[--z] = mp[q[i].x - 'a'];
        }
    }
    printf("%s", &ans);
    return 0;
}
