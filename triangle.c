#include <stdio.h>
#include <math.h>
int main()
{
    int i, N;
    long long a, b, c;
    double s, Area;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        if (a + b >= c && b + c >= a && c + a >= b)
        {
            s = (a + b + c) / 2.0;
            Area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("%.2lf\n", Area);
        }
        else
        {
            printf("Oh, No!\n");
        }
    }
    return 0;
}
