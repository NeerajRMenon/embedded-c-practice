#include "pangram.h"
#include<ctype.h>
#include<stdio.h>
bool is_pangram(const char *sentence){
    if (sentence==NULL){
        return false;
    }
    int flag=0;
    char alarray[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    for(int i=0;i<26;i++){
        int j=0;
        flag=0;
    while(sentence[j]!='\0')
    {
        if(alarray[i]==tolower(sentence[j])){
            flag=1;
            break;
        }
        else if(alarray[i]!=tolower(sentence[j])){
           j++;
       }
    
    }
        if(flag==0){
            return false;
        }
    }
    return true;
}