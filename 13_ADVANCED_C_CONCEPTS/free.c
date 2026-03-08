#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int* ptr=NULL;
    // printf("%p ",ptr);
    // printf("%p ",ptr);
    int* ptr=(int*) calloc(10,4);
    int *p=ptr;
    ptr--;
    free(p);
    return 0;
}