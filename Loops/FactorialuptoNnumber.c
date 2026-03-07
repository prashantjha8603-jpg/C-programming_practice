#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
        printf("Factorial of %d is : %d\n",i,a);
    }
    
    return 0;
}