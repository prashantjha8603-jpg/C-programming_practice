#include <stdio.h>
#include <string.h>
int main()
{
    char* s1 = "physics whallah";
    int size = 0;
    while (s1[size] != '\0')
    {
        size++;
    }
    printf("%d\n", size);
    // char* s2=s1;   // s2 is a shallow copy
    // s1[0]='M';
    // printf("%s",s2);
    char *s2;
    s2 = s1;
    s2 = "college whallah";
    // for (int i = 0; i <= size; i++) {
    //     s2[i] = s1[i];
    //     printf("%c",s2[i]);
    // }
    printf("\n%s", s2);
    printf("\n%s", s1);
    return 0;
}