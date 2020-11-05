#include <stdio.h>

//Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines. 
//Accept number of lines (n, integer) from the user.

int main()
{
    int i = 0, n = 0, square = 0, j = 1 , x = 0;

    printf("Number of lines  = ");
    scanf("%d",&n);

    for (i = 1;i <= n ;i++)
    {
        printf("%d %d %d\n",i, i*i , i*i*i);
    }
}