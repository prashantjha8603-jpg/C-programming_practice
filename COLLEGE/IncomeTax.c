#include <stdio.h>
int main()
{
    int n;
    printf("Enter your Annual Salary : ");
    scanf("%d",&n);
    int a = n - 750;
    if (a < 4000 && a > 0)
    {
        float x = a; // 0-4
        printf("Final salary is : %f", x);
    }
    else if (a < 8000 && a > 4000)
    {
        float x = a * 95 / 100; // 4-8
        printf("Final salary is : %f", x);
    }
    else if (a < 12000 && a > 8000)
    {
        float x = a * 90 / 100; // 8-12
        
        printf("Final salary is : %f", x);
    }
    else if (a < 16000 && a > 12000)
    {
        float x = a * 85 / 100; // 12-16
        printf("Final salary is : %f", x);
    }
    else if (a < 20000 && a > 16000)
    {
        float x = a * 80 / 100; // 16-20
        printf("Final salary is : %f", x);
    }
    else if (a < 24000 && a > 20000)
    {
        float x = a * 75 / 100; // 20-24
        printf("Final salary is : %f", x);
    }
    else
    {
        float x = a * 70 / 100; //>24
        printf("Final salary is : %f", x);
    }
    return 0;
}