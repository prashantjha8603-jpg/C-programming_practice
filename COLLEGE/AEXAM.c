#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a sentenace : ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    int x=0;
    while(str[i]!='\0'){
        if(str[i]=='e'){
            x++;
        }
        i++;
    }
    printf("Numbre of E in this sentence : %d",x);
    return 0;
}