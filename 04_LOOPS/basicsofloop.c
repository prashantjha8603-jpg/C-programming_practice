#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    int i;
    for (i = 1; i <= 10; i=i+2)
    {
        printf("Hello world\n");
    }
    // SCOPE of variables
    printf("%d", i);

    return 0;
}