#include <stdio.h>
#include <math.h>

int main()
{
    double H, M, m_angle, h_angle, angle;
    scanf("%lf%lf", &H, &M);
    m_angle = M * 6;
    h_angle = (H * 30) + (M * 0.5);
    angle = fabs(h_angle - m_angle);
    if (angle > 180)
    {
        angle = 360 - angle;
    }
    printf("%lf\n", angle);
    return 0;
}
