#include <stdio.h>
#include <string.h>
int main()
{
    struct cricketer
    {
        char name[20];
        int age;
        int test_matches;
        float avg_run;
    };
    struct cricketer arr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name : ");
        scanf(" %[^\n]s", arr[i].name);
        printf("Enter age : ");
        scanf("%d", &arr[i].age);
        printf("Enter number of test matches : ");
        scanf("%d", &arr[i].test_matches);
        printf("Enter average run : ");
        scanf("%f", &arr[i].avg_run);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Name is : %s\n", arr[i].name);
        printf("Age is : %d\n", arr[i].age);
        printf("Number of test matches is : %d\n", arr[i].test_matches);
        printf("Average run is : %f\n\n", arr[i].avg_run);
    }
    return 0;
}