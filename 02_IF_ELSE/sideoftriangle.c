#include <stdio.h>
int main()
{
    int x;
    printf("Enter first number : ");
    scanf("%d", &x);
    int y;
    printf("Enter second number : ");
    scanf("%d", &y);
    int z;
    printf("Enter third number : ");
    scanf("%d", &z);
    if (x + y > z && x + z > y && y + z > x)
    {
        printf("the numbers are sides of triangle ");
    }
    else
    {
        printf("the number are not the sides of triangle ");
    }
    return 0;
}