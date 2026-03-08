#include <stdio.h>
int main()
{
    float cp;
    printf("Enter cost price : ");
    scanf("%f", &cp);
    float sp;
    printf("Enter selling price : ");
    scanf("%f", &sp);
    if (sp > cp)
    {
        float x = sp - cp;
        printf("Total profit is : %f", x);
    }
    if (sp == cp)
    {
        float x = sp - cp;
        printf("Total profit is : %f", x);
    }
    if (sp < cp)
    {
        float x = cp - sp;
        printf("Total loss is : %f", x);
    }
    return 0;
}