#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n = 5;
    int arr[5] = {1, 23, 69, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        int flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if(flag==false) break;
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}