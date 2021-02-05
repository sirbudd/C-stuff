#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 10;
    int sum;

    int c = -a;
    printf("c = %d\n",c);
    int d = -b;
    printf("d = %d\n",d);
    sum = c + d;

    printf("Negative sum = %d \n",sum);
}