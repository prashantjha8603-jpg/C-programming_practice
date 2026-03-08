#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the Row of 1st matrices : ");
    scanf("%d", &x);
    printf("Enter the column of 1st matrices : ");
    scanf("%d", &y);
    printf("Row of 2nd matrices is : %d\n", y);
    printf("Enter the column of 2nd matrices : ");
    scanf("%d", &z);
    int arr[x][y], brr[y][z];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
        } }printf("\n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < z; j++) {
            scanf("%d", &brr[i][j]);
        }  }
        int res[x][z];
    for(int i=0;i<x;i++){
        for(int j=0;j<z;j++){
            res[i][j]=0;
            for(int k=0;k<x;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<z;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}