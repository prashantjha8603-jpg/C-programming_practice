#include <stdio.h>
int main()
{
    int arr[5] = {1, 53, 3, 4, 5};
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            sum2 += arr[i];
        else
            sum1 += arr[i];
    }
    printf(" %d", sum2 - sum1);
    return 0;
}