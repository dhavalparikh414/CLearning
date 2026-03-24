#include<stdio.h>

int g1; // C allows a global variable to be declared again when first declaration does not intialise the variable
int g1=10;
int main()
{
    printf("the value of global variable is %d\n",g1);
    /*The range of variables of different data types depends on its size

    Ex : signed char is 1 byte in size so it can hold values from -128 to +127
    unsigned char can hold from 0 to 255.

    Any unsigned data type can hold values from 0 to 2^bits - 1
    Any signed data type can hold values from -2^(bits-1) to  2^(bits-1) -1
    */

    /*Every char has an integer value (ascii value) */

    char ch1;
    printf("Enter a character\n");
    scanf("%c", &ch1);
    printf("The entered character is %c and its ascii value is %d\n", ch1, ch1);

    /* lvalue in an expression should always be a proper memory
    ex : int a;
         10 = a; // this will throw an lvalue error 
        lvalue cannot be an address.
&ch=10, if valid, would set the address of ch to 10. The address of variables (and other addressable values) is not under user control in C so not an l-value.
                 */

    return 0;
}
