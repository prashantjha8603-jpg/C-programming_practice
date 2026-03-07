#include <stdio.h>
int main()
{
    int n;
    printf("Enter year ");
    scanf("%d", &n);
    if (n % 100 == 0)
    {
        if (n % 400 == 0)
            printf("this is leap year");
        else
            printf("This is year not a leap year");
    }
    else if (n % 4 == 0)
    {
        printf("this is leap year");
    }
    else
    {
        printf("This is year not a leap year");
    }
    return 0;
}