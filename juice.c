#include <stdio.h>
int main()
{
    int i, n;
    double pi, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%lf", &pi);
        sum = sum + pi;
    }
    sum = sum / n;
    printf("%.12f\n", sum);
    return 0;
}
