#include<stdio.h>

int main()
{
    // Arrays are fixed size  sequenced collection of elements of same data type
    // Subscripts of an array can be integer constants, integer variables like i or expressions that yield an integer

    /*
        Array is called static data structure
    syntax : datatype <arrname>[sizeofarray];

    ex: int arr[5] = {1,2,3,4,5};

    if we give less number of values in the initialisation than its size , compiler will place zeros in uninitialized places

    if we give values more than array size , "there is no boundary checking in C" would write value in the memory location next to the array size.
    */

    int arr[5] = {1,2,3,4,5};
    int i =0;
    for(i =0;i<5;i++)
    {
        printf("the arr[%d]=%d\t address of arr[%d] = %u\n",i, arr[i], i, &arr[i]);
    }
return 0;
}
