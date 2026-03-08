#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row : ");
    scanf("%d", &n);
    int k=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("* ");
        }
        k--;
        printf("\n");
    }
    return 0;
}