#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter number of row : ");
    scanf("%d", &x);
    printf("Enter number of column : ");
    scanf("%d", &y);
    int arr[x][y],brr[y][x]; //= {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            brr[i][j]=arr[j][i];
        }
    }
    printf("\nThe transpose of array : \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}