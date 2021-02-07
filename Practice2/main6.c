#include <stdio.h>
#include <stdio.h>
#include <string.h>

//find middle of array

int x;

int main()
{   
    printf("Size of array = ");
    scanf("%d",&x);
    int array[x];
    int i;
    for(i = 0; i < x; i++)
    {
        printf("Elementul %d = ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
    for(i = 0; i < x; i++)
    {
        printf("Elementul %d = %d\n",i,array[i]);
    }
    printf("\n");

    int size = sizeof(array)/sizeof(array[0]);
    printf("Mijlocul arrayului este %d\n", array[size/2]);
    return 0;
}