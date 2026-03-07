#include <stdio.h>
int main()
{
    int n;
    printf("Enter units");
    scanf("%d", &n);
    float x = 100 * 1.5;
    float y = 100 * 2;
    float a;
    if (n <= 100)
    {
        a = n * 1.5;
        printf("bills is %f", a);
    }
    else if (n <= 200)
    {
        a = x + (n - 100) * 2;
        printf("bills is %f", a);
    }
    else
    {
        a = x + y + (n - 200) * 3;
        printf("bill is %f", a);
    }

    return 0;
}