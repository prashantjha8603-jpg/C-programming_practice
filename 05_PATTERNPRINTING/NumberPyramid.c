#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Row : ");
    scanf("%d", &n);
    int k = (2 * n - 1);
    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        for (int j = 1; j <= k; j++)
        {
            if (j <= (n - i) || j >= (n + i))
            {
                printf("  ");
            }
            else
            {
                printf("%d ", x);
                x = x + 1;
            }
        }
        printf("\n");
    }
    return 0;
}