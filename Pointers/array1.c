#include <stdio.h>

//basic pointers
//elementele unui array sunt puse unul dupa altul in memorie

int main()
{
    int a[4];
    int i = 0;

    for (i = 0; i < 4 ; i++)
    {
        printf("Adresa elementului %d este %p\n",i,&a[i]);
    }
    return 0;
}