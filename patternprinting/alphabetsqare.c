#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number ; ");
    scanf("%d", &n);
    char ch;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            int x = 64 + i;
            char ch = (char)x;
            printf("%c  ", ch);
        }
        printf("\n");
    }
    return 0;
}