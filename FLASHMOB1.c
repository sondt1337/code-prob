#include <stdio.h>
int a[105][10];
int b[35] = { 0 };
main() {
    int n, k, m;
    scanf("%d%d", &n, &k);
    int dem = 0;
    m = n;
    b[n] = 1;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
        if (a[i][1] == n) {
            b[a[i][0]]++;
            n = a[i][0];
        }
    }
    for (int i = 34; i >= 0; i--) {
        if (b[i] != 0) {
            dem++;
        }
    }
    if (m > 33)
        printf("%d 1", m);
    else
        printf("%d %d", n, dem);
}
