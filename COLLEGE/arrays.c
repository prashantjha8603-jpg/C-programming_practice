#include <stdio.h>
int main()
{
    int a[5] = {100, 120, 300, 170, 290};
    int b;
    scanf("%d", &b);
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] == b)
        {
            printf("The element is persent in array\n");
            break;
        }
        else
        {
            continue;
            printf("The element is not persent in array\n");
        }
    }
    return 0;
}