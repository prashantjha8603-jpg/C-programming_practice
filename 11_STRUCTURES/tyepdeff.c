#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct book {
        char name[50];
        float price;
        int number;
    } pk ;
    pk a;
    pk b;

    strcpy(a.name, "secret seven");
    a.number = 400;
    a.price = 67.89086;

    strcpy(b.name, "Fuck You");
    b.number = 9900;
    b.price = 87.8982;

    printf("%s\n", a.name);
    printf("%.3f\n", a.price);
    printf("%d\n\n", a.number);

    printf("%s\n", b.name);
    printf("%.3f\n", b.price);
    printf("%d\n", b.number);
    
    return 0;
}