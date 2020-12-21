#include <stdio.h>

//Write a C program to find and print the square of each one of the even values from 1 to a specified value

int main()
{
    int input = 0;
    printf("Input : ");
    scanf("%d",&input);
    printf("List from 1 to %d\n",input);

    for (int i = 0;i <= input;i++)
    {
        if(i%2 == 0 && i!=0)
        {
            printf("\n");
            printf("%d ^ 2 = %d",i,i*i);
        }
    }
    printf("\n");
    return 0;
}