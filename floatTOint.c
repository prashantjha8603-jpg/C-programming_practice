#include <stdio.h>
int main()
{
    float x;
    printf("Enter a decimal number : ");
    scanf("%f", &x);
    int y = x;
    printf("%f", x - y);
    return 0;
}