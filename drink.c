#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    l = (k * l) / nl;
    c = (c * d);
    p = p / np;
    int min = l;

    if (c < min)
    {
        min = c;
    }
    if (p < min)
    {
        min = p;
    }
    int total = min / n;
    printf("%d\n", total);
    return 0;
}
