//Arrays ( declaration, access, sizeof array, passing as input to functions, iteration with the use of pointers)

#include <stdio.h>
#include <stdlib.h>

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
            printf("Elem [%d][%d] = %d\n",i,j,array[i][j]);
        }
    }
    printf("%d \n\n",array[0][0]);
    for (int i = 0;i < N; i++)
    {
        for(int j = 0;j < M; j++)
        {
            printf("Elementul [%d][%d] = %d ",i,j,array[i][j]);
        }
        printf("\n");
    }
    return 0;
}