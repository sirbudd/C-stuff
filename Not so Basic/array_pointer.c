#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;

    int i = 0;
    for(i = 0; i < n; i++)
    {
        printf("Elem[%d] = %d \n",i,arr[i]);
    }
    printf("\n\n");
    
    int *ptr;
    for (ptr = &arr[0]; ptr <= &arr[3]; ++ptr)
    {
        printf("Elem = %d\n",*ptr);
    }

}