#include <stdio.h>
int main(){
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("%d\n%d\n%d",x,y,z);
    return 0;
}