#include <stdio.h>
#include <stdio.h>
#include <string.h>

//finding missing number

#define N 5
int main()
{
    int vector[N] = {1,2,4,5};

    int suma = 0;
    for(int i = 0; i < 5; i++)
    {
        suma = suma + vector[i];
    }

    printf("Suma este = %d \n",suma);
    int suma2 = (N)*(N+1)/2;
    printf("%d\n",suma2);
    int dif = suma2 - suma;

    printf("Nr lipsa este %d \n",dif);

    return 0;
}