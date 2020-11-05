#include <stdio.h>

//Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.

int main()
{
    //int input = 0;
    //printf("Input = ");
    //scanf("%d",&input);
    printf("Output = \n");

    for (int i = 0;i <= 100; i++)
    {
        if(i%25 == 3)
        printf("%d " ,i);
    }


    return 0;
}