#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Row : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int y = 65;
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)y;
            printf("%c ", ch);
            y = y + 1;
        }
        printf("\n");
    }
    return 0;
}