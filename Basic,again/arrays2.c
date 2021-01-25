#include <stdio.h>

//arrays

int main()
{
    int x[5][5];
    int i,j;
    int n =0,m=0;

    printf("N = ");
    scanf("%d",&n);
    printf("M = ");
    scanf("%d",&m);

    for (i = 0; i < n ;i++)
        {
            for (j = 0;j < m; j++)
            {
                printf("Valori = ");
                scanf("%d",&x[i][j]);
            }
        }

    for (i = 0; i < n ;i++)
        {
            for (j = 0;j < m; j++)
            {
                printf("Rezultatul [%d][%d] = %d\t",i+1,j+1,x[i][j]);
            }
            printf("\n");
        }


    return 0;
}