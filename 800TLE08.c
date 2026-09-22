#include <stdio.h>
int main()
{
    int arr[100];
    int t, n, x;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int count = 0;
        scanf("%d%d", &n, &x);

        for (int j = 0; j <= n - 1; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int k = 0; k <= n - 1; k++)
        {
            if (x == arr[k])
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
