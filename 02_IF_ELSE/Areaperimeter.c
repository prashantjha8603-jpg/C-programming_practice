#include <stdio.h>
int main()
{
    int l;
    printf("Enter the length of rectangle ");
    scanf("%d", &l);
    int b;
    printf("Enter the breadth of rectacgle ");
    scanf("%d", &b);
    int a = l * b;
    printf("Area of rectangle : %d", a);
    int p = 2 * (l + b);
    printf("\nPerimeter of rectangle : %d", p);
    if (a > p)
    {
        int x = a - p;
        printf("\nArea is greter than perimetre by %d", x);
    }
    if (a < p)
    {
        int y = p - a;
        printf("\nPerimeter is greter than area by %d", y);
    }
    if (a == p)
    {
        printf("\nArea And Perimetre is Equal ");
    }
    return 0;
}