#include <stdio.h>
int main()
{
    int d;
    printf("enter distance ");
    scanf("%d", &d);
    int t;
    printf("enter time ");
    scanf("%d", &t);
    int s = d / t;
    printf("Speed is %d", s);
    return 0;
}