#include <stdio.h>
int main()
{
    int n, i, t, temp, rem, sum = 0;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        temp = n;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
