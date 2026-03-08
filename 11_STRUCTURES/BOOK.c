#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int number;
    } a, b, c;
    // a.name = "prashant";
    strcpy(a.name, "secret seven");
    a.number = 400;
    a.price = 67.89086;

    strcpy(b.name, "Fuck You");
    b.number = 9900;
    b.price = 87.8982;

    printf("%s\n", a.name);
    printf("%.3f\n", a.price);
    printf("%d\n", a.number);

    printf("%s\n", b.name);
    printf("%.3f\n", b.price);
    printf("%d\n", b.number);
    // char ch[13];
    // strcpy(ch,"secret seven");
    // printf("%s",ch);
    return 0;
}