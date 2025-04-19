#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
uint32_t num;
uint32_t toggl_even_bits(uint32_t num)
{
        int arr1[32];
        uint32_t arr2[32];
        for (int i=0; i<32;i++){
            arr1[i]= (num>>i)&1;
        }
        for(int i=0;i<32;i++)
        {
            printf("%d",arr1[i]);
        }
        printf("\n");

        for(int i=0;i<32;i++)
        {
            if((i%2)==0){

                if(arr1[i]==0){
                        arr1[i]=1;

                }
                else if(arr1[i]==1){
                    arr1[i]=0;
                }
            }
            else continue;
        }

        for(int i=0;i<32;i++)
        {
            printf("%d",arr1[i]);
        }
        printf("\n");


        uint32_t result=0;
        for (int i=0;i<32;i++)
        {
            result=result|arr1[i]<<i;
        }
        printf("%X",result);

}


int main()
{
    scanf("%X", &num);
    printf("%X\n",num);
    toggl_even_bits(num);
    return 0;
}
