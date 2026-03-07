#include <stdio.h>
int main()
{
    int arr[6] = {1, 4, 5, 7, 8, 11};
    // for(int i=0;i<6;i++){
    //     for(int j=i+1;j<6;j++){
    //         if(arr[i]+arr[j]==12){
    //             printf("sum of %d and %d is 12\n",arr[i],arr[j]);
    //         }
    //     }
    // }
    int i = 0, j = 6 - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == 12)
        {
            printf("sum of %d and %d is 12\n", arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > 12)   j--;
        else  i++;
    }
    return 0;
}