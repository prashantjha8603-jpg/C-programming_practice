#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        char tier;
        char name[15];
    } poke;

    poke arr[3];
    strcpy(arr[0].name, "charizard");
    arr[0].hp = 100;
    arr[0].tier = 'A';

    strcpy(arr[1].name, "pikachu");
    arr[1].hp = 90;
    arr[1].tier = 'B';

    strcpy(arr[2].name, "mewtwo");
    arr[2].hp = 80;
    arr[2].tier = 'C';

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].name);
        printf("%d\n", arr[i].hp);
        printf("%c\n", arr[i].tier);
        printf("\n");
    }
    return 0;
}