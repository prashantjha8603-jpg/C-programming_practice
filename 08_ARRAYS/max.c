#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={-8,-7,-256,-500,97};
    // int max =arr[0]; OR
    int max =INT_MIN;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The maximum value of the array is %d",max);
    return 0;
}