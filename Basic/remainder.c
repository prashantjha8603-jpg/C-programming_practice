#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Dividend ");
    scanf("%d", &a);
    printf("Enter Divisor ");
    scanf("%d", &b);
    // int q=a/b;
    // int answer=a-(q*b);//reminder=dividend-(diviser*Quotient)
    int r = a % b;
    printf("The Remainder when %d is divided by %d is %d", a, b, r);
    return 0;
}