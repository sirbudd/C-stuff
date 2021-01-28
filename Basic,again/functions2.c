#include <stdio.h>

//simple program to demonstrate using of functions to read/print arrays/vectors/etc.

void read_array(int a[][100],int n,int m);
void print_array(int a[][100],int n,int m);

int main()
{
    int a[100][100],n = 0,m = 0;

    printf("n = ");
    scanf("%d",&n);

    printf("m = ");
    scanf("%d",&m);

    printf("Citire matrice\n");
    read_array(a,n,m);

    printf("Afisare matrice\n");
    print_array(a,n,m);

    return 0;
}

void read_array(int a[][100],int n,int m)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m;j++)
        {
            printf("Array Element [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void print_array(int a[][100],int n,int m)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m;j++)
        {
            printf("A[%d][%d] = %d\t",i,j,a[i][j]);
        }
        printf("\n");
    }
}