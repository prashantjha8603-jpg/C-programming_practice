#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row: ");
    scanf("%d", &n);
    int x=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= x; k++)
        {
            printf("* ");
        }
        x--;
        printf("\n");
    }
    return 0;
}