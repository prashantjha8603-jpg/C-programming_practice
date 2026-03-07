#include <stdio.h>
int main()
{
    struct pokemon {// user defined data type
        int hp;
        float speed;
        int attact;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attact=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

    struct pokemon charizart;
    printf("Enter attack of charizart : ");
    scanf("%d",&charizart.attact);
    printf("Enter hp of charizart : ");
    scanf("%d",&charizart.hp);
    printf("Enter speed of charizart : ");
    scanf("%f",&charizart.speed);
    printf("Enter tier of charizart : ");
    scanf(" %c",&charizart.tier);
    
    struct pokemon mewtwo;
    mewtwo.attact=170;
    mewtwo.hp=150;
    mewtwo.speed=200;
    mewtwo.tier='G';

    printf("%d\n",mewtwo.attact);
    printf("%c\n",mewtwo.tier);

    printf("%.2f\n",charizart.speed);
    printf("%c\n",charizart.tier);

    return 0;
}