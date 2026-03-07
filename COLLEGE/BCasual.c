#include <stdio.h>
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int sub(int a, int b)
{
    int c = a - b;
    return c;
}
int mul(int a, int b)
{
    int c = a * b;
    return c;
}
int div(int a, int b)
{
    int c = a / b;
    return c;
}
int main()
{
    int a, b;
    printf("for add - 1\nfor sub - 2\nfor mul - 3\n for div - 4\n");
    int x;
    printf("Enter your choice : ");
    scanf("%d", &x);
    printf("\nEnter the number : ");
    scanf("%d", &a);
    printf("\nEnter the number : ");
    scanf("%d", &b);
    switch (x)
    {
    case 1:
        printf("Sum of the number : %d\n", add(a, b));
        
    case 2:
        printf("Subtract of the number : %d\n", sub(a, b));
        break;
    case 3:
        printf("multiply of the number : %d\n", mul(a, b));
        break;
    case 4:
        printf("Divide of the number : %d", div(a, b));
        break;
    default:
        printf("You enter worng number ");
        break;
    }

    return 0;
}
