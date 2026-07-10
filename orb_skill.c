#include <stdio.h>
int main()
{
    int R, B, G, skill;
    scanf("%d%d", &R, &B);
    if (R > B)
    {
        G = B;
        skill = (G * 5) + (R - B);
        printf("%d\n", skill);
    }
    else
    {
        G = R;
        skill = ((G * 5) + (B - R) * 2);
        printf("%d\n", skill);
    }
    return 0;
}
