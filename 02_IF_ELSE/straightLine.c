#include <stdio.h>
int main()
{
    float x1, x2, x3, y1, y2, y3;
    printf("Enter the value of x1 and y1 ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the value of x2 and y2 ");
    scanf("%d%d", &x2, &y2);
    printf("Enter the value of x3 and y3 ");
    scanf("%d%d", &x3, &y3);
    float m1;
    m1 = (y2 - y1) / (x2 - x1);
    float m2;
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("All points fall on a straight line ");
    }
    else
    {
        printf("All points not fall on a straight line ");
    }
    return 0;
}