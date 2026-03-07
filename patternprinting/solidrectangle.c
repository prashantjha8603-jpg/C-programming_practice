#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)//outer loop -> no of line
    {
        for (int i = 1; i <= m; i++)//inner line -> no of stars in each line
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}