#include <stdio.h>
int main()
{
    int M, N, total, area;
    scanf("%d%d", &M, &N);
    area = M * N;
    total = area / 2;
    printf("%d\n", total);
    return 0;
}
