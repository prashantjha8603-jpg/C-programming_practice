#include <stdio.h>
int main()
{
    int a;
    printf("ENTER BASE : ");
    scanf("%d", &a);
    int b;
    printf("ENTER POWER : ");
    scanf("%d", &b);
    int c = 1;
    for (int i = 1; i <= b; i++)
    {
        c = a * c;
    }
    printf("%d raised to the Power %d Is : %d", b, a, c);

    return 0;
}