#include <stdio.h>
#include <limits.h>
int main()
{
    int n = 6;
    int arr[6] = {8, 5, 0, 4, 5, 5};
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int x = i;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                x = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int y = 0, x = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        y = y * 10 + arr[i];
    }
    for (int k = n - 1; k > 0; k--)
    {

        if (arr[k] != arr[k - 1])
        {
            int pk = arr[k];
            arr[k] = arr[k - 1];
            arr[k - 1] = pk;
            for (int i = 0; i < n; i++)
            {
                x = x * 10 + arr[i];
            }
            z = 1;
            break;
        }
    }
    if (z == 0)
    {
        for (int i = 0; i < n; i++)
        {
            x = x * 10 + arr[i];
        }
    }
    printf("%d   %d\n", y, x);
    printf("The Sum of Minimum and 2nd minimum is %d\n", x + y);
    return 0;
}