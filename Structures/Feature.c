#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } poke;
    poke a, b, c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name, "Blastoise");
    b=a;
    

    printf("%s\n",b.name);
    return 0;
}