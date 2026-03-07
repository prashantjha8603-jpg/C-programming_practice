#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    printf("Enter a string : ");
    scanf("%[^\n]s", str);
    printf("the size of is : ");
    // size of string
    int size = 0, k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    printf("%d\n", size);
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
    return 0;
}