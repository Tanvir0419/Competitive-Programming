#include <stdio.h>
int main()
{
    int k, l, m, n, d, i, damaged_dragons = 0;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        printf("%d\n", d);
        return 0;
    }
    for (i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damaged_dragons++;
        }
    }
    printf("%d\n", damaged_dragons);
    return 0;
}
