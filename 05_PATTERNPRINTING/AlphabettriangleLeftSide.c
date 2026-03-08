#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Row : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x = 65;
        for (int j = 1; j <= n; j++)
        {
            char y = (char)x;
            if (j <= n - i)
            {
                printf("  ");
            }
            else
            {
                printf("%c ", y);
                x = x + 1;
            }
        }
        printf("\n");
    }
    return 0;
}