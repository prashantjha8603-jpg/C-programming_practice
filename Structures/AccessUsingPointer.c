#include <stdio.h>
#include <string.h>
typedef struct person
{
    int age;
    float weight;
} person;
void fun(person x){
    printf("%d\n",x.age);
    printf("%.1f\n",x.weight);
}
int main()
{
    person a;
    a.age = 29;
    a.weight = 98.85;
    fun(a);
    return 0;
}