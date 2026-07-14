#include <stdio.h>
int main()
{
    int t, c;
    scanf("%d", &t);
    for (c = 1; c <= t; c++)
    {
        int n, i, e, sum = 0;
        scanf("%d", &n);
        for (i = 1; i <= n - 1; i++)
        {
            scanf("%d", &e);
            sum = sum - e;
        }
        printf("%d\n", sum);
    }
    return 0;
}
