#include <stdio.h>
int main()
{
    long long n, m, a, h_stones, w_stones, total;
    scanf("%lld %lld %lld", &n, &m, &a);
    h_stones = n / a;
    if (n % a != 0)
    {
        h_stones++;
    }
    w_stones = m / a;
    if (m % a != 0)
    {
        w_stones++;
    }
    total = h_stones * w_stones;
    printf("%lld\n", total);
    return 0;
}
