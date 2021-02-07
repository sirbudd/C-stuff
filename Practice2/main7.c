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

    int a;
    printf("A = ");
    scanf("%d",&a);

    for(i = 0; i < x; i++)
    {
        if (a == array[i])
            printf("Nr cautat este prezent in array pe pozitia %d \n",i);
        else
            printf("Nr nu este prezent\n");
    }    
    return 0;
}