#include <stdio.h>
void fibonacci(int n)
{
    int b = 0;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a + b;
        printf("%d ",a);
        b = a + b;
        printf("%d ",b);
    }
    return ;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}