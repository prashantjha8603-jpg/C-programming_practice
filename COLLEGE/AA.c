#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf(" %[^\n]s",str);
    printf("%s\n",str);
    for(int i='\0';i>=0;i--){
        printf("%c",&str[i]);
    }
}