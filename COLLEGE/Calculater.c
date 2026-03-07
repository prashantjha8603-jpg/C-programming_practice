#include <stdio.h>
int mul(int a, int b)
{
    int x = a * b;
    return x;
}
int divide(int a, int b)
{
    int x = a / b;
    return x;
}
int add(int a, int b)
{
    int x = a + b;
    return x;
}
int sub(int a, int b)
{
    int x = a - b;
    return x;
}
int modulo(int a, int b)
{
    int x = a % b;
    return x;
}
int main()
{
    int a = 15, b = 10;
    printf("%d \n", mul(a, b));
    printf("%d \n", divide(a, b));
    printf("%d \n", add(a, b));
    printf("%d \n", sub(a, b));
    printf("%d \n", modulo(a, b));
    return 0;
}