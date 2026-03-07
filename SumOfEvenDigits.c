#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);
    int x = 0;
    int y = 0;
    int z = 0;
    while (n > 0)
    {
        y = n % 10;
        if (y % 2 == 0)
        {
            x = x + y;
        }
        else
        {
            x = x + 0;
        }
        n = n / 10;
        z++;
    }
    printf("Sum of even digits : %d\n", x);
    printf("Total number of digits : %d", z);
    return 0;
}