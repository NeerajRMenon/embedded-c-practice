#include "binary.h"
#include<stdio.h>
#include<math.h>
#include<string.h>
int convert(const char *input)
{
    long int n=0;
    int i=0;
    while(input[i]!='\0')
    {
    switch(input[i]){
        case '0': n=n+(pow(2,(strlen(input)-i-1))*0);
            break;
        case '1': n=n+(pow(2,(strlen(input)-i-1))*1) ;
            break;
        default: return -1;
            break;
        
    }
        i++;
    }
    return n;


    
}