#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];
    scanf("%[^\n]s", str);
    printf("Your input was : %s", str);
    return 0;
}