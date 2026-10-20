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
        int max_count = 0;
        for (int k = 0; k <= n - 1; k++)
        {
            if (arr[k] == 0)
            {
                count++;
                if (count > max_count)
                {
                    max_count = count;
                }
            }
            else
            {
                count = 0;
            }
        }

        printf("%d\n", max_count);
    }
    return 0;
}
