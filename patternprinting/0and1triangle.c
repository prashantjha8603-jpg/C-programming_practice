#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Row : ");
    scanf("%d", &n);
    int x;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            x = 1;
        else
            x = 0;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            if (x == 1)
                x = 0;
            else
                x = 1;
        }
        printf("\n");
    }
    return 0;
}