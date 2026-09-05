#include <stdio.h>
int main()
{
    int N, X, T = 0, time;
    scanf("%d%d%d", &N, &X, &T);
    if (N % X == 0)
    {
        time = (N / X) * T;
    }
    else
    {
        time = (N / X) * T + T;
    }
    printf("%d\n", time);
    return 0;
}
