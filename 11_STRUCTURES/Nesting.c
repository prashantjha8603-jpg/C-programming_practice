#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    } legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.normal.name, "Prashant jha");
    strcpy(mewtwo.ability, "Pressure ");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack = 150;
    mewtwo.normal.speed = 987;
    mewtwo.normal.tier = 'B';
    
    printf("%s\n", mewtwo.normal.name);
    printf("%s\n", mewtwo.ability);
    printf("%d\n", mewtwo.normal.hp);
    printf("%d\n", mewtwo.normal.attack);
    printf("%d\n", mewtwo.normal.speed);
    printf("%c\n", mewtwo.normal.tier);
    return 0;
}