#include <stdio.h>
int main()
{
    int a, b, total = 0;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        total = a - b;
        printf("%d ", b);
        printf("%d\n", total / 2);
    }
    else
    {
        total = b - a;
        printf("%d ", a);
        printf("%d\n", total / 2);
    }
    return 0;
}
