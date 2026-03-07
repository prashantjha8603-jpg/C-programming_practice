#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two number : ");
    scanf("%d%d", &a, &b);
    float sum, min, mul, div;
    sum = a + b;
    min = a - b;
    mul = a * b;
    div = a / b;
    printf("Sum of two number is : %f", sum);
    printf("\nMinus of two number is : %f", min);
    printf("\nMultiply of two number is : %f", mul);
    printf("\nDivide of two number is : %f", div);
    return 0;
}