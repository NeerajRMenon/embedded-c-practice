#include <stdio.h>
#include <stdlib.h>
int count_no_of_1s(int num)
{
    int count=0;
    while(num!=0){
        num=num&(num-1);
        count++;
    }
    printf("%d\n",count);
   return count;

}
int main()
{
    int num;
    printf("Enter a number to find the number of 1s in it, using Kernighan's Algorithm!: ");
    scanf("%d",&num);
    int count=count_no_of_1s(num);

     if(count==1){
        printf("The number is also a power of 2 !");
    }


    return 0;
}
/* Notes:
1) continue is used in case of loops and not in regular if-else conditions, if used causes logical errors.

*/
