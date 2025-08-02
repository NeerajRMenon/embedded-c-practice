#include "eliuds_eggs.h"
int egg_count(long int num){
int count=0;
for(int i=50;i>=0;i--){
    if((num>>i)&1){
        count=count+1;
    }
    else{
        continue;
    }
}
     return count;
}