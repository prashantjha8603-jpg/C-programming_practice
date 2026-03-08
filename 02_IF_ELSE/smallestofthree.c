#include <stdio.h>
int main()
{
    int x;
    printf("Enter the age of Ram : ");
    scanf("%d", &x);
    int y;
    printf("Enter the age of Shyam : ");
    scanf("%d", &y);
    int z;
    printf("ENTER THE AGE OF AJAY : ");
    scanf("%d", &z);
    if (x < y && x < z)
    {
        printf("Ram is youngest ");
    }
    if (y < x && y < z)
    {
        printf("Shyam is youngest ");
    }
    if (z < y && z < x)
    {
        printf("Ajay is youngest ");
    }
    return 0;
}