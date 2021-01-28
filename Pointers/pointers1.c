#include <stdio.h>

//basic pointers

int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;
    *ptr = 20;
    printf("%d\n",x);
    printf("%d\n",*ptr);
}