#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

uint32_t toggle3rdbit(uint32_t num)
{
  int arr[32];
  for (int i=0;i<32;i++)
  {
      arr[i]=num>>i&1;
  }

  for(int i=0;i<32;i++)
  {
      if(i%3==0)
        {
            if(arr[i]==0)
            {
                arr[i]=1;
            }
            else
                arr[i]=0;
        }
        else
            continue;
  }
    uint32_t result=0;
  for(int i=0;i<32;i++)
  {
      result=result|(arr[i]<<i);
  }
  printf("%X",result);
}


int main()
{
    printf("Hello world!\n");

    uint32_t num;

    printf("Enter the 32 bit 0x number");
    scanf("%x",&num);

    toggle3rdbit(num);

    return 0;
}
