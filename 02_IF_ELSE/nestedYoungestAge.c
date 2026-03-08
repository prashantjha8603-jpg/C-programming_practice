#include <stdio.h>
int main()
{
    int x;
    printf("Enter age of Ram : ");
    scanf("%d", &x);
    int y;
    printf("Enter age of Shyam : ");
    scanf("%d", &y);
    int z;
    printf("Enter age of Ajay : ");
    scanf("%d", &z);
    if (x < y)
    {
        if (x < z)
        {
            printf("Ram is youngest");
        }
        else
        {
            printf("Ajay is youngest");
        }
    }
    else
    {
        if (y < z)
        {
            printf("Shyam is youngest");
        }
        else
        {
            printf("Ajay is youngest");
        }
    }
    return 0;
}
