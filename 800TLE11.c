#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = abs(arr[0] - x);
    for (int j = 0; j <= n - 1; j++)
    {
        int diff = abs(arr[j] - x);
        if (diff < min)
        {
            min = diff;
        }
    }
    printf("%d\n", min);
    return 0;
}
