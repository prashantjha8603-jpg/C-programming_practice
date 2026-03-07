#include <stdio.h>
int main()
{
    int j;// garbagr value, jab koi valuenahi di ho tab
     // computer khud se koi value le leta hai 
    //ager vo value 10 se chota ho to code chale ga nahi to nahi chale ga
    while (j <= 10)
    {
        printf("\n%d ", j);
        j = j + 1;
    }
    return 0;
}