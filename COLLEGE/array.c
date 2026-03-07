#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of arrays : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, y;
    // printf("Enter a number : ");
    // scanf("%d", &x);
    printf("Enter the number of position to be delete : ");
    scanf("%d", &y);
    for (int i = y-1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    // arr[y] = x;
    n--;
    printf("The New Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}