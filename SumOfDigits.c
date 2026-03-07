#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);
    int x = 0;
    int y;
    int z = 0;
    while (n > 0)
    {
        y = n % 10;
        n = n / 10;
        x = x + y;
        z++;
    }
    printf("Sum Of The Digits : %d\n", x);
    printf("Total number of digits : %d", z);
    return 0;
}