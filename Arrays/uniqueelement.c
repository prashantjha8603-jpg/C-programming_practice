//this code is not perfect
//only for one unique number in the array and this number must be before the repetion os another number 
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter number of the size : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        bool x = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                x = true;
        }
        if (x == false)
        {
            printf("%d is unique number\n", arr[i]);
            break;
        }
    }
    return 0;
}