#include <stdio.h>
int main()
{
    int i, t;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 3 == 0)
        {
            printf("Second\n");
        }
        else
        {
            printf("First\n");
        }
    }
    return 0;
}
