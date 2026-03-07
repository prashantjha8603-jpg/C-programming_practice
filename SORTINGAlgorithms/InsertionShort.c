#include<stdio.h>
int main(){
    int n=5;
    int arr[5]={5,3,4,1,2};
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    } printf("\n");
    for(int i=1;i<=n-1;i++){
        int j=i;
        while (j>0&&arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}