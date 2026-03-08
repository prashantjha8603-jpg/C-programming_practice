#include<stdio.h>
int main(){
    int arr[9]={5,0,2,0,0,4,1,3,0};
    // int ans[9];
    // int x=0,y=8;
    // for(int i=0;i<9;i++){
    //     if(arr[i]!=0){
    //         ans[x]=arr[i];
    //         x++;
    //     }
    //     else{
    //         ans[y]=arr[i];
    //         y--;
    //     }
    // }
    for(int i=0;i<8;i++){
        int x=0;
        for(int j=0;j<8;j++){
            if(arr[j]==0){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                x=1;
            }
        }
        if(x==0) break;
    }
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}