#include <stdio.h>
int main()
{
    // FILE *fileptr = fopen("prashant.txt", "r");
    // char str[100];
    // while(fgets(str, 100, fileptr) != NULL)
    // {
    //     printf("%s", str);
    // }

    // CREATING A FILE
    FILE *ptr = fopen("PW.txt", "w");

    char str[] = "No Matter How Dark The Night Is\nIf Sun Wants To RISE, It Will Rise.";
    fputs(str, ptr);
    fclose(ptr);
}