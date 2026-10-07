#include<stdio.h>

int main()
{

    const int a =5;
    const int *pt =&a;

    int b =10;
    pt =&b;

    printf("the value pointed by pt is %d\n", *pt);
    return 0;
}
