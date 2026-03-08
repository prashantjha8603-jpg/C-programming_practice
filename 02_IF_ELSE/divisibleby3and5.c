#include <stdio.h>
int main()
{
    int x;
    printf("Enter number");
    scanf("%d", &x);
    if (x % 5 == 0 && x % 3 == 0)
    {
        printf("number is divisible by 5 and 3 ");
    }
    else
    {
        printf("number is not divisible by 5 and 3 ");
    }
    return 0;
}