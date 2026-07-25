#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int x, k;
        scanf("%d%d", &x, &k);
        if (x % k != 0)
        {
            printf("1\n");
            printf("%d\n", x);
        }
        else
        {
            printf("2\n");
            printf("%d 1\n", x - 1);
        }
    }
    return 0;
}
