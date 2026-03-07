#include <stdio.h>
#include<stdbool.h>
void reverse(int arr[],int brr[])
{
    bool x = false;
    for (int i = 0, j = 4; i <= j; i++, j--)
    {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        if (arr[i] != brr[i])
        {
            x = true;
            break;
        }
    }
    if (x == false)
            printf("The given number is a palindrome\n");
        else
            printf("The given number is not a palindrome\n");
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int brr[5] = {1, 2, 3, 2, 1};
    reverse(arr, brr);

    return 0;
}