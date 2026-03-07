#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;        // int* -> int ka address store karta hai
    *x = 7;             // a is changed
    int **y = &x;       // int** -> int*(pointer) ka address store karta hai
    printf("%p\n", &a); // a ka adress print hoga
    printf("%p\n", x);  // a ka adress print hoga

    printf("%d\n", a);   // a print hoga
    printf("%d\n", *x);  // a print hoga
    printf("%d\n", **y); // a print hoga

    printf("%p\n", &x); // a
    printf("%p\n", y);

    printf("%p\n", *y);
    return 0;
}