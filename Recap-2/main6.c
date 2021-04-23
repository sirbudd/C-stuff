//Functions (write a function with a return, passing input)

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int suma(int a,int b);

int main()
{
    int a = 10, b = 20;
    int x = suma(a,b);
    printf("SUMA = %d\n",x);

    return 0;
}

int suma(int a,int b)
{
    return a+b;
}