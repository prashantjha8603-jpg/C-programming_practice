#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact = fact * i;
    return fact;
}
int combination(int a, int b)
{
    int aCr = factorial(a) / (factorial(b) * factorial(a-b));
    return aCr;
}
int main()
{
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    int r;
    printf("Enter r ");
    scanf("%d", &r);
    int ncr = combination(n, r);
    printf("The combination of %dC%d is %d", n, r, ncr);
    return 0;
}