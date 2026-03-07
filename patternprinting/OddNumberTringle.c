#include <stdio.h>
int main()
{
    int n;
    printf("Enter the NO of Line : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 1)
    {
        int x = 1;
        for (int j = 1; j <= i; j = j + 1)
        {
            printf("%d ", x);
            x = x + 2;
        }
        printf("\n");
    }
    return 0;
}