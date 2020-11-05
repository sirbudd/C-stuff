#include <stdio.h>

//Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.

int main()
{
    int n = 0,x = 0 ,i = 0, j = 1;
    printf("N = ");
    scanf("%d",&n);

    for (i = 1;i <= n;i++)
    {
        while (x<3) //number of lines
        {
            printf("%d ",j++); //increment number of lines
            x++;
        }
        x = 0;
        printf("\n");
    }

}