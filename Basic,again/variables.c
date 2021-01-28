#include <stdio.h>

//testing variables

int main()
{
    static int a = 2;
    a++;
    printf("Static = %d\n",a);
    printf("Static = %d\n",a);
}