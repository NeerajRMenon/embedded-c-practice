#include "isogram.h"
#include <ctype.h>
bool is_isogram(const char phrase[]){
    int i=0;
    int count=0;
    int flag=0;
    if(phrase==NULL){
        return false;
    }
    while(phrase[i]!='\0'){
        count++;
        i++;
    }
    for(int i=0;i<count;i++){
        if(phrase[i]==' '||phrase[i]=='-'){
            continue;
        }
        for(int j=i+1;j<count;j++){
            if(phrase[j]==' '||phrase[j]=='-'){
            continue;
        }
            else if(tolower(phrase[j])==tolower(phrase[i])){
                flag=1;
                break;
            }
            else continue;
        }
    }
    if(flag==0){
        return true;
    }
    else{
        return false;
    }
    
}