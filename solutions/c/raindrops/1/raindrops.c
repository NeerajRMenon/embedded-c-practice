#include "raindrops.h"
#include<stdio.h>
#include<string.h>

void convert(char result[], int drops)
{
    int t=0,f=0,s=0;
    if(drops%3==0){
        strcat(result,"Pling");
        drops=drops/3;
        t=1;
    }
    if(drops%5==0){
        strcat(result,"Plang");
        drops=drops/5;
        f=1;
    }
    if(drops%7==0){
        strcat(result,"Plong");
        drops=drops/7;
        s=1;
    }
    if(t==0 && f==0 && s==0){
        sprintf(result,"%d",drops);
    }
    
    
}