#include <stdio.h>
int main()
{
    int a;
    printf("Enter first number ");
    scanf("%d", &a);
    int b;
    printf("Enter second number ");
    scanf("%d", &b);
    int c;
    printf("Enter third number ");
    scanf("%d", &c);
    int d;
    printf("Enter fourth number ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is gretest number", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is gretest number", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("%d is gretest number", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("%d is gretest number", d);
    }
    return 0;
}