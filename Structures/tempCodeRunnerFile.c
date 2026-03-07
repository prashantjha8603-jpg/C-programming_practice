#include <stdio.h>
int main()
{
    int arr[7]={1,2,2,4,4,4,5};
    for(int i=0;i<7;i++){
        for(int j=1+i;j<7;j++){
            if(arr[i]==arr[j])
            printf("%d is duplicate number \n",arr[j]);
            continue;
        }
    }
    return 0;
}