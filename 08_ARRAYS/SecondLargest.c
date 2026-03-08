#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {1, 2, 3, 49, 9, 2, 1};
    // int max =arr[0];
    int max = INT_MIN;
    int smax = INT_MIN;
    // for (int i = 0; i < 5; i++){
    //     if (max < arr[i]){
    //         max = arr[i];
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    //{
    //     if (arr[i] != max && smax < arr[i]){
    //         smax = arr[i]; }
    // }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    printf("The Second Maximum Value Of The Array Is %d", smax);
    return 0;
}