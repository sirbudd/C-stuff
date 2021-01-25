#include <stdio.h>

//calculating the number of items in an array;

int main()
{
    int array1[] = {2,31,32,13,453,2,42,3432,12,453,2,32,32,43,23,32};

    int size = sizeof(array1)/sizeof(int);
    printf("Size = %d \n",size);

    int n = 0, m =0;
    int x[50][50];
    int i,j;
    printf("N = ");
    scanf("%d",&n);
    printf("M = ");
    scanf("%d",&m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Val elementului [%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Elem [%d][%d] = %d\t",i,j,x[i][j]);
        }
        printf("\n");
    }

    return 0;
}