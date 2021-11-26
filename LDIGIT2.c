#include <stdio.h>
#include <math.h>
int power(long long x, long long n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x % 10;
    else
    {
        long long a[90000], m = 1;
        a[0] = x;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[j] = (a[j] * x) % 10;
            }
        }
        return a[0];
    }
}
int main()
{
    long long a, n;
    scanf("%ld%ld", &a, &n);
    printf("%d", power(a, n));
}
