#include <stdio.h>

//Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80

int main()
{
    int x = 0;

    printf("Input number = ");
    scanf("%d",&x);

    if (x>=0 && x<=20)
    {
        printf("x is between [0,20]\n");
    }
    else if (x>=21 && x<=40)
    {
        printf("x is between [21,40]\n");
    }
    else if (x>=41 && x<=60)
    {
        printf("x is between [41,60]\n");
    }
    else if (x>=61 && x<=80)
    {
        printf("x is between [61,80]\n");
    }
    else if (x>80)
    {
        printf("error\n");
    }
    

    return 0;
}