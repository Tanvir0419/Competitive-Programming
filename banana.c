#include <stdio.h>
int main()
{
    long long i, k, n, w, cost = 0, borrow = 0;
    scanf("%lld%lld%lld", &k, &n, &w);
    for (i = 1; i <= w; i++)
    {
        cost = cost + i * k;
    }
    if (n >= cost)
    {
        printf("0\n");
    }
    else
    {
        borrow = cost - n;
        printf("%lld\n", borrow);
    }
    return 0;
}
