#include <stdio.h>
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i <= 1; i++)
    {
        printf("\n");
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("\n\n%d is sum of a rectangle inside a matrix\n\n", sum);
    return 0;
}