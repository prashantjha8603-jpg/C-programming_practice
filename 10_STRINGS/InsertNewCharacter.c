#include <stdio.h>
#include <string.h>
int main()
{
    char s1[15] = "Prashant jha";
    int len = strlen(s1);
    int x;
    printf("Enter location of new character : ");
    scanf("%d", &x);
    for (int i = len; i >= x; i--)
    {
        s1[i + 1] = s1[i];
    }
    char ch;
    printf("Enter new character : ");
    scanf(" %c",&ch);
    s1[x] = ch;
    printf("\n%s",s1);
    return 0;
}