#include <stdio.h>
int main()
{
    int x; // Number
    int y; // result
    int z; // remainder
    for (int i = 1; i <= 500; i++)
    {
        x = i;
        y = 0;
        while (x != 0)
        {
            z = x % 10;
            y = z * z * z + y;
            x = x / 10;
        }
        if (y == i)
        {
            printf("%d\n", y);
        }
    }
    return 0;
}