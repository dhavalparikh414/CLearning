#include<stdio.h>
int main()
{
    /* WRITE A PROGRAM TO FIND MAXIMUM OF 3 NUMBERS USING TERNARY OPERATORS */
    int a =5, b=7, c=10;
    int maxnum;

    maxnum = a>b ? (a>c?a:c) : (b>c?b:c);
    printf("maximum of a=%d, b=%d, c= %d, maxnum =%d\n", a, b, c, maxnum);
return 0;
}
