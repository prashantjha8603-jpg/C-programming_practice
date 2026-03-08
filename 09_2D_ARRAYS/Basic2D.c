#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter The Number Of Rows : ");
    scanf("%d", &x);
    printf("Enter The Number Of Columns : ");
    scanf("%d", &y);
    int arr[x][y];
    printf("Enter the matirics \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
    // 1 2
    // 3 4
    return 0;
}