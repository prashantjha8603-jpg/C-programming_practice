#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x = n + 1 - i;
        for (int j = 1; j <= x; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}