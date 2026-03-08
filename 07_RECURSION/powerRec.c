#include <stdio.h>
int power(int a,int b)
{
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main()
{
    int a;
    printf("Enter Base : ");
    scanf("%d", &a);
    int b;
    printf("Enter Exponent : ");
    scanf("%d", &b);
    printf("%d power of %d is %d",b,a,power(a,b));
    return 0;
}