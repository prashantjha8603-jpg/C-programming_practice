#include <stdio.h>
int main()
{
    int x =5;
    printf("%d\n",x);
    printf("%d\n",x++);//post increment, use x then increment
                       //(5 print ho jayega or uske baad x ki value 5 se 6 ho jayegi)
    int y =8;
    printf("\n%d\n",y);
    printf("%d\n",++y);//pre increment, increment then use y
                       //(x ki value 8 se 9 ho jayegi or fir 9 print ho jayegi)
    return 0;
}