#include <stdio.h>
#include<limits.h>
int main()
{
    int n = 7, k = 4;
    int arr[7] = {8, 6, 9, 3, 5, 7, 2};
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    } 
    printf("\n");
    for (int i = 0; i < k; i++){
        int min=INT_MAX;
        int x=i;
        for (int j = i; j < n; j++){ 
            if (min > arr[j]){
                min=arr[j];
                x=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nThe %dth element of the given array is %d ",k,arr[k-1]);
    return 0;
}