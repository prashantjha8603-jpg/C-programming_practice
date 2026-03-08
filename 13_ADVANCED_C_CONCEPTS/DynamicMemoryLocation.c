#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
    // int n; // 4 bytes
    // printf("Enter the size of arrray : ");
    // scanf("%d", &n);
    // int arr[n];
    //     for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    char *ptr = (char *)malloc(10 * sizeof(char));
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
}