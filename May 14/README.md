This program Swapps odd and even indices of a hex number.

Logic:   
1) Mask even indices using 0x55555555 , since 5= 0101 ;   
2) Mask odd indices using 0xAAAAAAAA , since A = 1010 ;  
3) or, we can use: #define EVEN_MASK 0b01010101010101010101010101010101 ;   
                  #define ODD_MASK  0b10101010101010101010101010101010 ;    
4)evenpart= (num & EVEN_MASK ) gives only the numbers in the even indices in the number ;    
5)oddpart= (num & ODD_MASK ) gives only the numbers in the odd indices in the number ;     
6) evenpart=evenpart<<1 ;    
7) oddpart=oddpart>>1;    
8) num= EVEN_MASK | ODD_MASK;     
     

Note: mask should be an alternating number;        
assign the shifted variable to a variable, just shifting wont work;           
We are using bitwise and and or;               
