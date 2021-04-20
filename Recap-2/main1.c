//basic data types

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("This is my number , X = %d\n",x);
    char* string = "Testing,testing";
    char* strin2 = "My name is what";
    printf(string);
    printf("\n");
    printf("%s\n",strin2);

    unsigned int y = -20;
    printf("Y (unsigned) = %u\n",y);

    int overflow = 2000000000000000000000000;
    printf("Int cu overflow = %d\n",overflow);

    double nr_lung = 2323232.421;

    return 0;
}