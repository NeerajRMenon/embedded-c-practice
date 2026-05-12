#include "perfect_numbers.h"
int n;
kind classify_number(int n){
int sum=0;
    if(n<=0){
        return ERROR;
    }
for(int i=1; i<n ; i++){
    if(n%i == 0){
        sum=sum+i;
    }
}
    
    if(sum==n){
        return PERFECT_NUMBER;
    }
    else if(sum>n){
        return ABUNDANT_NUMBER; 
    }
    else 
        return DEFICIENT_NUMBER;
}