#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates : \n");
    scanf("%d %d", &x, &y);
    if (y == 0 && x != 0)
    {
        printf("Lies on x-axis");
    }
    else if (x == 0 && y != 0)
    {
        printf("Lies on y-axis");
    }
    else if (y == 0 && x == 0)
    {
        printf("The point is origin");
    }
    else
    {
        printf("The point is not lies on x-axis and not lies on y-axis and not at the origin");
    }
    return 0;
}