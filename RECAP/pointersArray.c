#include <stdio.h>
#include <stdlib.h>

//iterate array with pointers

int main()
{
    int a[5];
    int *ptr = &a[0];

    for(ptr = &a[0]; ptr < &a[5]; ptr++)
    {
        scanf("%d",ptr);
    }
    for(ptr = &a[0]; ptr < &a[5]; ptr++)
    {
        printf("%d \n",*ptr);
    }

    return 0;
}