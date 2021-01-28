#include <stdio.h>

//basic pointers
//elementele unui array sunt puse unul dupa altul in memorie

int main()
{
    int a[4] = {1,2,3,4};
    int *ptr;
    ptr = &a[2];
    printf("%d\n",*ptr);
    printf("%d\n",*ptr+1);
}