#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("The square root is : ");
    float root = sqrt(a);
    printf("%f",root);
    int q= pow(a,3);
    printf("\nthird power of %d is %d",a,q);
    return 0;
}