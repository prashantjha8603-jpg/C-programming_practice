#include <stdio.h>
int fact(int x)
{
    int factorial = 1;
        for (int i = 2; i <= x; i++)
        {
            factorial = factorial * i;
        }
    return factorial;
}
int combination(int n, int r)
{
    int nCr = fact(n) / (fact(r) * fact(n - r));
    return nCr;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int k = n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("  ");
        }
        k = k - 1;
        for (int g = 0; g <= i; g++)
        {
            int z = combination(i, g);
            printf("%d   ", z);
        }
        printf("\n");
    }
    return 0;
}