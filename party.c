#include <stdio.h>
int main()
{
    int n, k, i, max = 0, required_t = 0, total_t;
    scanf("%d%d", &n, &k);
    total_t = 240 - k;
    for (i = 1; i <= n; i++)
    {
        required_t = required_t + (5 * i);
        if (required_t <= total_t)
        {
            max++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", max);
    return 0;
}
