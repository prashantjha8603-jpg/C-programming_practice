#include <stdio.h>
int main()
{
    int arr[3][3] = {{0, 0, 6}, {0, 7, 8}, {0, 7, 0}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != 0)
            {
                printf("%d%d:-%d ", i, j,arr[i][j]);
            }
        }
    }
    return 0;
}