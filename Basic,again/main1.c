//overflow
//WARNINGS
//CASTING
#include <stdio.h>

int main()
{
    unsigned char x = 255;
    x = x + 10;
    printf("%x\n",x); //pt ca e unsigned overflowul este ca un reset

    char y = 127;
    y = y + 2;
    printf("%u\n",y); //pt ca e signed overflowul e random

    char z = 1000; //warning de overflow

    int a = 5;
    float b = 10.2;

    double sum = (double)a+b;

    printf("%lf\n",sum);

    return 0;
}

