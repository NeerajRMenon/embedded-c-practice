#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t reversenum(uint32_t num)
{
    int arr1[32];
    int arr2[32];
    for(int i=0;i<32;i++)
    {
        arr1[i]=(num>>i)&1;
    }
    for(int i=0;i<32;i++)
        {
            arr2[i]=arr1[31-i];
        }

    uint32_t result=0;

    for(int i=0;i<32;i++)
    {
        result=result|(arr2[i]<<i);
    }
    return result;
}


int main()
{
    uint32_t num;
    printf("Enter no to be reversed:\n");
    scanf("%X",&num);
    uint32_t reversed=reversenum(num);
    printf("Reversed string: %X",reversed);
    return 0;
}

