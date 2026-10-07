#include<stdio.h>

int main()
{

    const int a =5;
    const int *pt =&a; // Here pt is a pointer to const int, but pt itself is not a constant pointer, so it can be assigned to some other memory location later.

    int b =10;
    pt =&b;

    printf("the value pointed by pt is %d\n", *pt); // it would return 10 as now pt points to b.
    return 0;
}
