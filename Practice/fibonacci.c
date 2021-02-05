#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0,b = 1,suma = 0;

    int iter;
    scanf("%d",&iter);

    for (int i = 0; i <= iter; i++)
    {
        printf("%d ",a);
        int c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}