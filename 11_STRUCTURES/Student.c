#include <stdio.h>
#include <string.h>
 struct Student
    {
        int roll;
        char name[20];
        char dept[20];
        char course[20];
        int year;
    } a, b;
void fun(struct Student x, struct Student y)
{
    if (strcmp(a.dept, b.dept) == 0)
        printf("Same department");
    else
        printf("Not Same department");
    return;
}
int main()
{
    a.roll = 21;
    b.roll = 21;
    strcpy(a.dept, "CSE");
    strcpy(b.dept, "CSE");
    fun(a, b);
    return 0;
}