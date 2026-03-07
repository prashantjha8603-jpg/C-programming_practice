#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, x = 12;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    sum += 1;
                    printf("(%d,%d,%d)\n", a[i], a[j],a[k]);
                }
            }
        }
    }
    printf("\n%d number of pair have sum equal to %d", sum, x);
    return 0;
}