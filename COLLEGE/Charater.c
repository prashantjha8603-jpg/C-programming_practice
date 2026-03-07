#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a charter : ");
    scanf("%c", &ch);
    int n = ch;
    printf("%d\n", n);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digits");
    }
    else
        printf("Special character");
    return 0;
}