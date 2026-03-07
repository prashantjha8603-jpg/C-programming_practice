#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a sentenace : ");
    gets(str);
    int i = strlen(str);
    for (int j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (str[j] > str[k])
            {
                int temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
        }
    }
    puts(str);
    return 0;
}