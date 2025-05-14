#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

int odd_even_swap(uint32_t num)
{
    uint32_t evenpart, oddpart;
    evenpart=(num & 0x55555555);
    oddpart= (num & 0xAAAAAAAA);

    evenpart=evenpart<<1;
    oddpart=oddpart>>1;

    num=evenpart | oddpart;
    return num;

}
int main()
{
    uint32_t num, swapped;
    printf("Enter the number to swap its odd and even positions:");
    scanf("%X",&num);
    swapped=odd_even_swap(num);
    printf("%X",swapped);
    return 0;
}
