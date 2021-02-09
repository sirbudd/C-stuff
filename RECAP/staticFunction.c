#include <stdio.h>

void foo()
{
    static int a;
    a++;
    printf("%d \n",a);
}

int main()
{
    foo();
    foo();
    return 0;
} 