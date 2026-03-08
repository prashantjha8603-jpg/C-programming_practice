#include <stdio.h>
int maze2(int n, int m)
{
    int rightways = 0, downways = 0;
    if (n == 1 && m == 1)
        return 1;
    if (n == 1)
        rightways += maze2(n, m - 1);
    if (m == 1)
        downways += maze2(n - 1, m);
    if (n > 1&&m > 1)
    {
        downways += maze2(n - 1, m);
        rightways += maze2(n, m - 1);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n;
    printf("Enter number of row : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);
    printf("Total number of ways is %d", maze2(n, m));
    return 0;
}