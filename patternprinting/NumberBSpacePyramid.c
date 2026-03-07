#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row: ");
    scanf("%d", &n);
    int num = n - 1;
    int spa = 1;
    int a = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        printf("%d ", a);
        if (i < n)
            a++;
        else
            a--;
    }
    printf("\n");
    for (int i = 1; i <= n - 1; i++)
    {
        a = 1;
        for (int j = 1; j <= num; j++)
        {
            printf("%d ", a);
            a++;
        }
        for (int j = 1; j <= spa; j++)
        {
            printf("  ");
            if ((spa / 2 +1) < j)
                a++;
            else
                a--;
        }
        for (int j = 1; j <= num; j++)
        {
            printf("%d ", a);
            a--;
        }
        printf("\n");
        num -= 1;
        spa += 2;
    }
    return 0;
}