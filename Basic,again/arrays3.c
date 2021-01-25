#include <stdio.h>

//sum of 2 matrices

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int n = 0, m = 0;
    int suma = 0;
    printf("N = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Valoarea : ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nValori a doua matrice \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Valoarea : ");
            scanf("%d",&b[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;

}