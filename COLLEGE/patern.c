#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int k = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("* ");
        }
        k--;

        printf("\n");
    }
    return 0;
}