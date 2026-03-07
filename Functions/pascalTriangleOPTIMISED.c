#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int y = n;
    for (int i = 0; i <= n; i++)
    {
        int x = 1;
        for (int j = 1; j <= y; j++)
        {
            printf("  ");
        }
        y -= 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d   ", x);
            x = x * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}