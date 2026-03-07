#include<stdio.h>
int main (){
    int arr[7]={1,2,23,43,5,69,7},count=0,x=6;
    for(int i=0;i<7;i++){
        if(x<arr[i]) count +=1;
    }
    printf("%d number is greter than 6",count);
    return 0;
}