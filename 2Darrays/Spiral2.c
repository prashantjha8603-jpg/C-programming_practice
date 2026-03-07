#include <stdio.h>
int main(){
    int n;
    printf("Enter number of row/column : ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter elements of matrix : ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]); } }
        int temp[n * n];
        int k=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        temp[k++]=a[i][j]; } }
    printf("\n");
    k=0;
    int minr = 0, maxr = n - 1, minc = 0, maxc = n - 1;
    int TotalnoElement = n * n, count = 0;
    while (count < TotalnoElement) {
        for (int i = minc; i <= maxc && count < TotalnoElement; i++) {
            printf("%d ", a[minr][i]);
            a[minr][i]=temp[k++];
            count++;
            if (count % n == 0)
                printf("\n"); }
        minr++;
        for (int i = minr; i <= maxr && count < TotalnoElement; i++) {
            printf("%d ", a[i][maxc]);
            a[i][maxc]=temp[k];
            count++;
            if (count % n == 0)
                printf("\n"); }
        maxc--;
        for (int i = maxc; i >= minc && count < TotalnoElement; i--) {
            printf("%d ", a[maxr][i]);
            a[maxr][i]=temp[k];
            count++;
            if (count % n == 0)
                printf("\n"); }
        maxr--;
        for (int i = maxr; i >= minr && count < TotalnoElement; i--) {
            printf("%d ", a[i][minc]);
            a[i][minc]=temp[k];
            count++;
            if (count % n == 0)
                printf("\n"); }
        minc++;
        printf("\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", a[i][j]); }
            printf("\n"); } }
    return 0;
}