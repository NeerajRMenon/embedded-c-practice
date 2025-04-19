# embedded-c-practice
Daily Embedded C Practice Problems and Solutions: Program to toggle all the even index bits in a given 0x number.  
Hi there  
This code toggles all the even index positions in a given hexadecimal number (in its binary form)

Say the user input is 0xAAAAAAAA the output will be 0xFFFFFFFF

0xAAAAAAAA is a 32 bit hex number, since each unit in it, say A (1010) consists of 4 bits. so 8 As, make 8x4 = 32 bits

Here i have defined a function, which first converts the given hex number into an array, consisting of the corresponding binary number.The logic behind this conversion is that, the array is declared as an integer array. Each element of the input hexadecimal number is shifted to right by i units (i is index position of array) and ANDED with the integer 1, ie: 0001. this extracts each binary bit of the input hexadecimal number and adds it to the ith position of the aaray.

Now using a for loop, each of the even index elements in the array is accessed and checked it is 0 or 1. if 0,it is changed to 1, vece versa.

Now the array containing the binary equivalent of the answer is converted to the required hexadecimal number using the logic of, first declaring a uint32_t variable called result, initialising it to 0. each ith element of hte array is shifted to left by i units and ORED with the variable result. This produces the final Hex answer.
