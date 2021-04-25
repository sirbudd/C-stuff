//middle of the array

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Number of elements = ");
    scanf("%d",&n);

    int array[n];

    for(int i = 0;i < n; i++)
    {
        printf("Elementul %d = ",i);
        scanf("%d",&array[i]);
    }

    for(int i = 0;i < n; i++)
    {
        printf("Elementul a[%d] = %d\n",i,array[i]);
    }

    int sizeA = sizeof(array)/sizeof(array[0]);
    printf("Size of array = %d\n",sizeA);

    printf("Middle = %d\n",array[sizeA/2]);

    return 0;
}