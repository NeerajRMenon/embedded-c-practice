#include "armstrong_numbers.h"
bool is_armstrong_number(int candidate){
    int ov1=candidate;
    int ov2=candidate;
    int sum=0,count=0;
    while(ov1!=0){
        count=count+1;
        ov1=ov1/10;
    }
for(int i=0;i<count;i++){
    sum=sum+pow(ov2%10,count);
    ov2=ov2/10;
}
    if(candidate==sum){
    return true;}
    else
        return false;
}