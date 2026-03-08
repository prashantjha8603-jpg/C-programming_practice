#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {{3, 23, 6}, {2, 54, 71}, {34, 62, -86}};
    int a, b;
    int x = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (x < arr[i][j])
            {
                x = arr[i][j];
                a = i;
                b = j;
            }
        }
    }
    printf("The maximum value element is : %d\n", x);
    printf("Index of maximum value is : (%d , %d)\n", a, b);
    int y = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (y > arr[i][j])
            {
                y = arr[i][j];
                a = i;
                b = j;
            }
        }
    }
    printf("The minimum value element is : %d\n", y);
    printf("Index of minimum value is : (%d , %d)\n", a, b);
    return 0;
}