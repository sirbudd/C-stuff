#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n, suma = 0;
    printf("Number of integers ");
    scanf("%d",&n);

    int *ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not available");
    }
    for(i = 0; i < n; i++)
    {
        printf("Enter your numbers = ");
        scanf("%d",ptr + i);
        suma = suma + *(ptr+i);
    }
    for(i = 0; i < n; i++)
    {
        printf("Numarul %d este %d \n",i+1,*(ptr+i));
    }
    printf("Suma este : %d \n",suma);

    return 0;
}