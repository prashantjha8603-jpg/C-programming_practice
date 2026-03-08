#include<stdio.h>
int main(){
    int n;
    printf("Enter Number Of Row : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int y=1;
        for(int j=1;j<=n;j++){
            int z=y+64;
            y=y+1;
            char x=(char)z;
            printf("%C ",z);
            x=x+1;
        }
        printf("\n");
    }
    return 0;
}