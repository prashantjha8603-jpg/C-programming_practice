#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number a b c\n ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("greatest integer is %d", a);
    }
    if (b > a && b > c)
    {
        printf("greatest integer is %d", b);
    }
    if (c > a && c > b)
    {
        printf("greatest integer is %d", c);
    }

    return 0;
}