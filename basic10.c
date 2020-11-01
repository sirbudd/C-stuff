#include <stdio.h>

//Write a C program that prints all even numbers between 1 and 50 (inclusive)

int main()
{
    printf("Even numebrs : ");

    for (int i = 0;i<=50;i++)
    {
        if(i%2 == 0)
        printf("%d ",i);
    } 
    return 0;
}