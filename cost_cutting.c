#include <stdio.h>
int main()
{
    int i, t, s1, s2, s3, high, low, survive = 0;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d%d%d", &s1, &s2, &s3);
        high = s1;
        low = s2;
        if (high < s2)
        {
            high = s2;
        }
        if (high < s3)
        {
            high = s3;
        }
        if (low > s1)
        {
            low = s1;
        }
        if (low > s3)
        {
            low = s3;
        }
        survive = (s1 + s2 + s3) - (low + high);
        printf("Case %d: %d\n", i, survive);
    }
    return 0;
}
