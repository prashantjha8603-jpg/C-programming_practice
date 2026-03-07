#include <stdio.h>
#include <string.h>
int main()
{
    struct Person
    {
        char name[50];
        float salary;
        int age;
    } abcd, b;
    // struct Person abcd;
    strcpy(abcd.name, "Prashant Jha");
    abcd.salary = 3505.53;
    abcd.age = 21;
    printf("%s\n", abcd.name);
    printf("%.4f\n", abcd.salary);
    printf("%d\n\n", abcd.age);

    strcpy(b.name, "Fuck you");
    b.salary = 9019.0034;
    b.age = 8765;
    printf("%s\n", b.name);
    printf("%.4f\n", b.salary);
    printf("%d\n", b.age);
    return 0;
}