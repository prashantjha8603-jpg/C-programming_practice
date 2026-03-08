#include <stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {1, 27, 43, 4, 85, 60, 7};
    int x = 60, y;
    bool flag = false;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            y = i;
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        printf("%d is present in the array\n", x);
        printf("%d is its index", y);
    }
    else
    {
        printf("%d is not persent in the array\n", x);
    }
    return 0;
}