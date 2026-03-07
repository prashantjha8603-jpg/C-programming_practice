#include <stdio.h>
int main()
{
    int x;
    printf("Enter a coficiant of x ");
    scanf("%d", &x);
    int y;
    printf("Enter a coficiant of y ");
    scanf("%d", &y);
    int z;
    printf("Enter a coficiant of z ");
    scanf("%d", &z);
    int a = y * y - 4 * x * z;
    if (a >= 0)
        printf("real roots");
    else
        printf("imagiary roots");
    return 0;
}