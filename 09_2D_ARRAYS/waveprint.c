#include <stdio.h>
int main()
{
    int m;
    printf("Enter number of row : ");
    scanf("%d", &m);
    int n;
    printf("Enter number of column : ");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter elements of matrix : ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]); } }
    // Wave print
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                printf("%d ", a[i][j]);  } }
        else {
                for (int k = n-1; k >= 0; k--)  {
                printf("%d ", a[i][k]); } } printf("\n");}
    return 0;
}