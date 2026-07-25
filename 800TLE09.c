#include <stdio.h>
int main()
{
    int t, n, e, i, j;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int sum = 0;
        scanf("%d", &n);
        for (j = 1; j <= n - 1; j++)
        {
            scanf("%d", &e);
            sum = sum - e;
        }
        printf("%d\n", sum);
    }
    return 0;
}
