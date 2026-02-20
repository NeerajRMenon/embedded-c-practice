#include "dnd_character.h"
#include<math.h>
#include<stdlib.h>
int ability(void)
{
    int rolls[4];
    rolls[0]=1;
    for(int i=0;i<4;i++){
        int n;
        n=rand()%6+1;
        rolls[i]=n;        
    }
    int smallest=rolls[0];
    for(int i=1;i<4;i++){
        if(rolls[i]<=smallest){
            smallest=rolls[i];
        }
        
    }
    return rolls[0]+rolls[1]+rolls[2]+rolls[3]- smallest ;
}
    
 int modifier(int score){
    return (int)floor((score-10)/2.0);      
}   
dnd_character_t make_dnd_character(void)
{
    dnd_character_t hero;
    hero.strength=ability();
    hero.dexterity=ability();
    hero.constitution=ability();
    hero.intelligence=ability();
    hero.wisdom=ability();
    hero.charisma=ability(); 
    hero.hitpoints=10+modifier(hero.constitution);
    return hero;
}



    