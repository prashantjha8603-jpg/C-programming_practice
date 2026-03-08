#include <stdio.h>
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    return;
}
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    swap(a,b);
    printf("a=%d\n", a);
    printf("b=%d", b);
    return 0;
}