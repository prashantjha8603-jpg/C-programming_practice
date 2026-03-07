#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int x=INT_MIN;
    int z;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j <4; j++)
        {
            sum=sum +arr[i][j];
            if(x<sum){
                x=sum;
                z=i;
            }
        }
    }
    
    printf("\n%d %d", sum,z);
    return 0;
}