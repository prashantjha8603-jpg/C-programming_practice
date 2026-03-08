#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Even number");
    }
    else
    { // if(n%2!=0){
        printf("Odd number");
    }
    return 0;
}