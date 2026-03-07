#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={-8,-7,-256,500,97};
    // int min =arr[0]; OR
    int min =INT_MAX;
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The maximum value of the array is %d",min);
    return 0;
}