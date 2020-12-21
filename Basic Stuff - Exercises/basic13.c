#include <stdio.h>

//Write a C program that accepts some integers from the user and find the highest value and the input position

int main()
{
    int input = 0;
    int array[input];
    int max = 0,pos = 0;
    printf("Input = ");
    scanf("%d",&input);

    for (int i = 0;i <= input;i++)
    {
        scanf("%d",&array[i]);
    }
    for (int j = 0;j <= input;j++)
    {   
        if (array[j] > max)
        {
            max = array[j];
            pos = j;
        }
        
    }
    printf("Highest value : %d \n",max);
    printf("Position : %d \n",pos+1);
    return 0;
}