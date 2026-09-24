#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, count = 0;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int k = 0; k < n - 1; k++)
        {
            if (arr[k] % 2 == arr[k + 1] % 2)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
