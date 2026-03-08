#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row : ");
    scanf("%d", &n);
    int k = n / 2;
    int nsp = k;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("* ");
        }
        if (i <= k)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }
    return 0;
}