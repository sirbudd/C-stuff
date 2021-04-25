//POINTERS

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    int *ptr2;
    int *ptr3;

    ptr2 = ptr3;

    printf("Ptr3 = %d\n",ptr3);

    printf("x = %d\n",x);
    printf("Ptr = %d\n",*ptr);

    return 0;
}