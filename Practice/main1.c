#include <stdio.h>
#include <stdlib.h>

//piramida

int main()
{
    int n = 0;
    printf("Nr de etaje =  ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < (2*n-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}