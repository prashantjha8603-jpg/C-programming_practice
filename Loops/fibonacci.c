#include <stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int c = 1;
    // printf("1 term of fibonacci is %d\n", c);
    // printf("2 term of fibonacci is %d\n", c);
    for (int i = 1; i <= (n - 2); i++)
    {
        c = a + b;
        a = b;
        b = c;
        //printf("%d term of fibonacci is %d\n", (i + 2), c);
    }
    printf("%d term of fibonacci is %d", n, c);
    return 0;
}