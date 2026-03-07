#include <stdio.h>
int main()
{
    int n;
    printf("Enter your balance amount : ");
    scanf("%d", &n);
    int x;
    printf("Enter your trancition : ");
    scanf("%d", &x);
    int y = n - x;
    if (x % 100 == 0)
    {
        if (n >= x)
            printf("your balance amount after trancition %d", y);
        else
            printf("Your trancition is failed");
    }
    else
        printf("Enter a amount which is multiple 0f 100");
    return 0;
}