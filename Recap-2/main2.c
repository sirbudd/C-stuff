//Arrays ( declaration, access, sizeof array, passing as input to functions, iteration with the use of pointers)

#include <stdio.h>
#include <stdlib.h>

void citire_array(int nr_lin,int nr_col,int arr[][nr_col]);
void print_array(int nr_lin,int nr_col,int arr[][nr_col]);

int N;
int M;

int main()
{
    int vector [4] = {1,2,3,4};
    for (int i = 0; i < 4;i++)
    {
        printf("Nr %d este = %d\n",i,vector[i]);
    }

    printf("N = ");
    scanf("%d",&N);
    printf("M = ");
    scanf("%d",&M);

    int array[N][M];
    int array2 = 0;
    for (int i = 0;i < N; i++)
    {
        for(int j = 0;j < M; j++)
        {
            printf("Elem = ");
            scanf("%d",&array[i][j]);
            //printf("Elem [%d][%d] = %d\n",i,j,array[i][j]);
        }
    }
    //printf("%d \n\n",array[0][0]);
    for (int i = 0;i < N; i++)
    {
        for(int j = 0;j < M; j++)
        {
            printf("Elementul [%d][%d] = %d ",i,j,array[i][j]);
        }
        printf("\n");
    }

    int nr_lin = 0, nr_col = 0;
    printf("Nr lin = ");
    scanf("%d",&nr_lin);
    printf("Nr col = ");
    scanf("%d",&nr_col);
    int arr[nr_lin][nr_col];

    citire_array(nr_lin,nr_col,arr);
    print_array(nr_lin,nr_col,arr);
    return 0;
}


void citire_array(int nr_lin,int nr_col,int arr[][nr_col])
{
    for (int i = 0;i < nr_lin;i++)
    {
        for(int j = 0; j < nr_col;j++)
        {
            printf("Elem = ");
            scanf("%d",&arr[i][j]);
        }
    }
}

void print_array(int nr_lin,int nr_col,int arr[][nr_col])
{
    for (int i = 0;i < nr_lin;i++)
    {
        for(int j = 0; j < nr_col;j++)
        {
            printf("Elem [%d][%d]= %d ",i,j,arr[i][j]);
        }
        printf("\n");
    }
}