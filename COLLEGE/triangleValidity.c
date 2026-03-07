#include <stdio.h>
int main()
{
    int a, b, c;
    printf("1st side of triangle ");
    scanf("%d", &a);
    printf("2nd side of triangle ");
    scanf("%d", &b);
    printf("3rd side of triangle ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && c + b > a)
    {
        if (a == b && a == c)
            printf("triangle is equlatrale");
        else if (a == b || a == c || c == a)
            printf("triangle is isoceles");
        else
            printf("triangle is scalene");
    }
    else
    {
        printf("Triangle is not vailade");
    }
    return 0;
}