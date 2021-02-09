#include <stdio.h>

int main()
{
    int i, j, temp;
    int array[] = {50 , 3, 12, 32, 1};
    
    for(i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(i = 4; i > -1; i--)
        printf("Arrayul sortat este %d \n",array[i]);

    printf("\n");
    return 0;
}