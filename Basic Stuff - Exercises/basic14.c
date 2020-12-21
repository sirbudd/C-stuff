#include <stdio.h>

//Write a C program to print the numbers from the lowest to the highest (inclusive) and the sum of consecutive integers from a given pair of numbers.

int main()
{   
    int lower = 0, upper = 0, sum = 0;
    do{
        printf ("Lower = ");
    scanf("%d",&lower);
    printf ("Upper = ");
    scanf("%d",&upper);
    }while(upper<lower); //loop do while ca sa fim siguri ca upper>lower 
    

    printf("Your interval is [%d,%d]\n",lower,upper);

    for (int i = lower; i <= upper;i++)
    {
        if(i%2 != 0)
        {
            printf("%d ",i);
            sum = sum+i;
        }
        
    }
    printf("Sum is %d \n",sum);
    return 0;
}