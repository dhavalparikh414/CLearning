#include<stdio.h>
int main()
{
    int num =3;
    int numoftimesLsh =1;
    int numAfterLsh = num << numoftimesLsh;
    printf("left shifting num =%d, by %d times yields numAfterLsh = %d\n",num,numoftimesLsh, numAfterLsh); // Leftshift means num multiplied by 2^shift ex: 3<< 1 = 3*2^1 =6; 3<<2 = 3*2^2 =12

    int num2 = 11;
    int numOfTimesRsh =1;
    int numAfterRsh = num2 >> numOfTimesRsh;

    printf("Right shifting num = %d by %d times yields numAfterRsh = %d\n",num2,numOfTimesRsh, numAfterRsh); // Rightshift means num divided by 2^shift ex: 11<< 1 = 11/2^1 =5; 11<<2 = 11/2^2 =2
    return 0;
}
