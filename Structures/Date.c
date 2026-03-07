#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a, b ;
    a.day = 20;
    a.month = 3;
    a.year = 2025;

    b.day = 30;
    b.month = 3;
    b.year = 2025;

    bool flag = 1;
    if (a.day != b.day) flag = 0;
    if (a.month != b.month) flag = 0;
    if (a.year != b.year) flag = 0;

    if (flag == 1) printf("Equal\n");
    else printf("Unequal\n");

    date c;
    c=a;
    bool x = 1;
    if (a.day != c.day) x = 0;
    if (a.month != c.month) x = 0;
    if (a.year != c.year) x = 0;

    if (x == 1) printf("Equal\n");
    else printf("Unequal\n");
    return 0;
}