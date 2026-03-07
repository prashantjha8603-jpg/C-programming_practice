#include <stdio.h>
int factorial(int x)
{
    int y = 1;
    for (int i = 1; i <= x; i++)
    {
        y = y * i;
    }
    return y;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("Factorial of the given number is %d", factorial(n));
    return 0;
}