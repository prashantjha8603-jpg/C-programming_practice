#include <stdio.h>
int main()
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10; // x=10 not x<10
    //for false ,value is 0 (z = 0)
    //for true  ,value is 1 (z = 1)
    printf("\nx=%d y=%d z=%d ", x, y, z);
    return 0;
}