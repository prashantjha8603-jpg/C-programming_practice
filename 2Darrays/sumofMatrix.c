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
    int a=0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
            a=a+arr[i][j];
        }
        printf("\n");
    }
    printf(" Sum of the element of is %d",a);
    return 0;
}