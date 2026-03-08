#include <stdio.h>
int main()
{
    int y;
    printf("Enter year : ");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
}