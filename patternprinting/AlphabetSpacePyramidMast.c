#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of row: ");
    scanf("%d", &n);
    int num = n - 1;
    int spa = 1;
    for (int i = 1; i <= 2 * n - 1; i++){
        char ch = 64 + i;
        printf("%c ", ch);}
    printf("\n");
    for (int i = 1; i <= n - 1; i++){
        int a = 1;
        char ch = 64 + a;
        for (int j = 1; j <= num; j++) {
            printf("%c ", ch);
            ch++;}
        for (int i = 1; i <= spa; i++){
            printf("  ");
            ch++;}
        for (int i = 1; i <= num; i++){
            printf("%c ", ch);
            ch++;}
        num -= 1;
        spa += 2;
        printf("\n");}
    return 0;
}