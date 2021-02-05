#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[4] = {1,2,3,4,6};

    int sizeA = sizeof(a)/sizeof(int);
    printf("Size A = %d\n",sizeA);
    int sizeB = sizeof(b)/sizeof(int);

    if(sizeA == sizeB)
    {
        printf("Putem compara sizeul\n");
    }
    else
    {
        exit(0);
    }

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == b[i])
        {
            printf("Elementul %d din A si B este acelasi \n",i);
        }
        else
        {
            printf("Elementul %d nu este asemanator\n",i);
        }
    }


    return 0;
}