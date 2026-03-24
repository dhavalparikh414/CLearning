#include<stdio.h>

int main()
{
    /* Different operators in C are 

    1) Arithmetic -     + - * / % (remainder of two numbers)
    2) Relational -     >, <, >=, <=, ==
    3) Increment/Decrement- ++, --
    4) Assignment -     a=b, a+=b, a-=b, a*=b, a/=b, a%=b
    5) Logical -        &&, ||, ! 
        logical || if first operand is true , no need to check the second operand -- the expression will return true
        logical && if first operand is false, no need to check the second operand -- the expression will return false

    6) Bitwise -        &, |, ~, ^, <<, >>
    7) Conditional -    ?:
    8) Special 

    */

    /* % modulus operator does not work on floats */

/*
    the following code will return an error that invalid operand  to binary %
    float  a= 10, b =25;
   
   float res = b%a;
    printf("res = %f, a =%f, b = %f\n", res, a, b);
*/
    
    int i1 =1, j1 =4, k1 =7, m1;
    m1 = ++i1|| ++j1 || ++k1; // try with --i instead of ++i to know the logical or operation way.
    printf("i1 =%d, j1 =%d, k1 =%d, m1 =%d\n", i1, j1,k1,m1);

    return 0;
}
