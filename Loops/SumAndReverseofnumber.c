#include <stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    int r = 0;
    int a = 0;
    int b = 0;
    int c = n;
    while (n > 0)
    {

        r = r * 10;
        a = n % 10;
        r = r + a;
        b = b + a;
        n = n / 10;
    }
    printf("SUM OF THE DIGITS IS : %d\n", b);
    printf("REVERSE OF THE NUMBER : %d\n", r);
    printf("SUM OF THE NUMBERS IS : %d", c+r);
    return 0;
}