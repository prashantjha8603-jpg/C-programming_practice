#include <stdio.h>
int main()
{
    int x;
    printf("X");
    scanf("%d", &x);
    int y;
    printf("Y");
    scanf("%d", &y);
    int z = (x + y) * x;
    printf("Answer is : %d", z);

    return 0;
}