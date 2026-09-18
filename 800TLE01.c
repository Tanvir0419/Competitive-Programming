#include <stdio.h>

int main()
{
    int t, n, x, i, j, k, is_sorted;
    int arr[105];
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &x);

        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        // Rule 1: x >= 2 can always sort the array
        if (x >= 2)
        {
            printf("YES\n");
        }
        else
        {
            // Rule 2: x == 1, check if the entire array is already sorted
            is_sorted = 1;
            for (k = 0; k < n - 1; k++)
            {
                if (arr[k] > arr[k + 1])
                {
                    is_sorted = 0; // Found an out-of-order pair
                    break;
                }
            }

            if (is_sorted)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}
