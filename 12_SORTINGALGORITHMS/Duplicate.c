#include <stdio.h>
int main()
{
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10};
    /*Case 1*/
    // for(int i=0;i<7;i++){
    //     for(int j=1+i;j<7;j++){
    //         if(arr[i]==arr[j])
    //         printf("%d is duplicate number \n",arr[j]);
    //         continue;
    //     }
    // }

    /*Case 2
    int brr[7]={0};
    for (int i = 0; i < 7; i++){
        if (brr[arr[i]-1] != 1){
            brr[arr[i]-1] = 1;
        }
        else{
            printf("%d is duplicate number \n", arr[i]);
        }
    }*/
    int x = 10 * (10 + 1) / 2;
    int y = 0;
    for (int i = 0; i < 11; i++)
    {
        y += arr[i];
    }
    printf("%d is duplicate number \n", y - x);
    return 0;
}