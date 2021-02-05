#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary;
    int weight = 1;
    int decimal = 0;
    printf("Binary number = ");
    scanf("%d",&binary);

    while(binary != 0)
    {
        int rest = binary % 10; //luam restul pe care il fol ca sa aflam decimal
        decimal = decimal + rest * weight; //weight e puterea cu care "amplificam"
        weight =  weight * 2;
        binary = binary/10;
    }
    printf("DECIMAL = %d \n",decimal);
}