#include <stdio.h>
int f[1000001];
int main() {

    long long N, a[1000001], res = 0;
    scanf("%ld", &N);
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= N; i++) {
        scanf("%ld", &a[i]);
        f[a[i]]++;
    }
    for (int i = 1; i <= N; i++)
        if (f[a[i]] == 1)
            res++;
    printf("%d", res);
}
