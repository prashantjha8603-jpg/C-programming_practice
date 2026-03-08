#include <stdio.h>
void sum(int n, int x)
{
    if (n == 0)
    {
        printf("Sum is : %d", x);
        return;
    }
    sum(n - 1, x + n);
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int x = 0;
    sum(n, x);
    return 0;
}