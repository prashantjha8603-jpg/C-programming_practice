#include <stdio.h>
void greet(int n)
{
    if (n == 0)
        return;        // base case
    printf("%d\n", n); // code
    greet(n - 1);      // call
    printf("%d\n", n); // code
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    greet(n);
    return 0;
}