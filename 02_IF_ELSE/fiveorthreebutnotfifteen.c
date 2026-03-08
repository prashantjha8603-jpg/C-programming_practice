#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    // if (x % 5 == 0 || x % 3 == 0){
    //     if(x%15!=0){
    //         printf("The number is divisible by 5 or 3 but not by 15");
    //     }
    //     else{
    //         printf("The number is divisible by 3, 5 and 15 ");
    //     }
    // }
    if ((x % 5 == 0 || x == 0) % 3 && x % 15 != 0)
    {
        printf("the number is divisible by 5 or 3 but not 15");
    }
    else
    {
        printf("The number is not matching the reguired condition ");
    }
    return 0;
}