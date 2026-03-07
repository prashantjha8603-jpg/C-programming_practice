#include <stdio.h>
#include <limits.h>
int main(){
    int n = 7;
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - 1; i++){
        int min = INT_MAX;
        int mindex=i;
        for (int j = i; j < n; j++){
            if (min > arr[j]) {
                min = arr[j];
                mindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mindex];
        arr[mindex] = temp;
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}