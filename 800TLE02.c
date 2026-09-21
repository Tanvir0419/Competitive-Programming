#include <stdio.h>
int main()
{
    int arr[100];
    int t, n, x, diff;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d%d", &n, &x);

        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[j]);
        }

        int v = arr[0];

        for (int k = 0; k < n - 1; k++)
        {
            diff = arr[k + 1] - arr[k];
            if (v < diff)
            {
                v = diff;
            }
        }
        if (2 * (x - arr[n - 1]) > v)
        {
            v = 2 * (x - arr[n - 1]);
        }

        printf("%d\n", v);
    }
    return 0;
}
