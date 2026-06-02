#include<stdio.h>
int main()
{
int num, rev, rem;
printf("Enter a number:");
scanf("%d", &num);
rev =0;
int num1 = num; // backup the original number to compare it with reverese num later.
while(num !=0)
{
    rem = num%10;
    num = num/10;
    rev = rev *10 + rem;
    printf("num is %d, rem = %d, rev = %d\n", num, rem, rev);
}

if( num1 == rev)
{
printf("The number you entered is a palindrome\n");
return 0;
}
printf("The number you entered is not a palindrome\n");
return 0;
}
