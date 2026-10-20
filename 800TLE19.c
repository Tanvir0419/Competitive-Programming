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

        int count = 0;
        int op = 0;
        for (int k = 0; k <= n - 1; k++)
        {
            if (arr[k] < 0)
            {
                count++;
            }
        }
        for (int l = 0; l <= n - 1; l++)
        {
            if (count % 2 != 0)
            {
                arr[l] = arr[l] * (-1);
                op++;
            }
        }
        printf("%d", op);
    }
    return 0;
}
