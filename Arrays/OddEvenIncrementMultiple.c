#include <stdio.h>
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 3, 66, 80, 6};
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0) arr[i] += 10;
        else arr[i] *= 2;
        printf("%d ", arr[i]);
    }
    return 0;
}