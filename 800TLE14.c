#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long a, b, c, sum = 0;
        scanf("%lld%lld%lld", &a, &b, &c);
        if (c % 2 != 0)
        {
            if (a >= b)
                printf("First\n");
            else
                printf("Second\n");
        }
        else
        {
            if (a > b)
                printf("First\n");
            else
                printf("Second\n");
        }
    }
    return 0;
}
