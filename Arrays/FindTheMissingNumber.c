#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of arr : ");
    scanf("%d", &n);
    int k = n + 1;
    int arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int sum2 = (k * (k + 1)) / 2; // sum of first n+1 natural number
    printf("missing number is %d", sum2 - sum);
}