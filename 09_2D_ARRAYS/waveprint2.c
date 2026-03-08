#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of row : ");
    scanf("%d", &r);
    int c;
    printf("Enter number of column : ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter elements of matrix : ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]); } }
    // Wave print
    for (int i = 0; i < c; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < r; j++) {
                printf("%d ", a[j][i]);  } }
        else {
                for (int k = r-1; k >= 0; k--)  {
                printf("%d ", a[k][i]); } } printf("\n");}
    return 0;
}