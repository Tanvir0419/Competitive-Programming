#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[j]);
        }

        int min_diff = arr[1] - arr[0];

        for (int k = 0; k < n - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                min_diff = -1;
                break;
            }
            int diff = arr[k + 1] - arr[k];
            if (diff < min_diff)
            {
                min_diff = diff;
            }
        }
        if (min_diff < 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", (min_diff / 2) + 1);
        }
    }
    return 0;
}
