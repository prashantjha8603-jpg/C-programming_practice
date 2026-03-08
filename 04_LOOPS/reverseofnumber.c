#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);
    int r = 0;
    int z = 0;
    while (n > 0)
    { // first method
        // r=n%10;
        // n=n/10;
        // printf("%d",r);

        // second method;
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
        z++;
    }
    printf("Reverse Of Number : %d", r);
    printf("\nTotal number of digits : %d", z);
    return 0;
}