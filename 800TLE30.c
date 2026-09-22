#include <stdio.h>
int main()
{
    int t, n, sum = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int count = 0;
        scanf("%d", &n);
        while (n >= 10)
        {
            n = n / 10;
            count++;
        }
        sum = (count * 9) + n;
        printf("%d\n", sum);
    }
    return 0;
}
