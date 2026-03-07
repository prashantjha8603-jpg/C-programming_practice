#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the number of student : ");
    scanf("%d", &x);
    printf("Enter the number of subject : ");
    scanf("%d", &y);
    int arr[x][y];
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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}