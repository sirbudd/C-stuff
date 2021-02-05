#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;

    printf("A = ");
    scanf("%d",&a);

    int c = a;

    while(a != 0)
    {
        int rest = a % 10;
        b = b*10 + rest;
        a = a/10;
    }

    printf("B = %d\n",b);

    if (b == c)
    {
        printf("Palindrom\n");
    }
    else
    {
        printf("Not palindrom\n");
    }


}