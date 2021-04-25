//PRACTICE

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void suma_array(int nr_lin, int nr_col, int array[nr_lin][nr_col]);
void citire_array(int nr_lin, int nr_col, int array[nr_lin][nr_col]);

int main()
{
    int nr_lin = 0, nr_col = 0;

    printf("Nr lin = ");
    scanf("%d",&nr_lin);
    printf("Nr col = ");
    scanf("%d",&nr_col);

    int array[nr_lin][nr_col];

    //citire_array(nr_lin,nr_col,array);
    //suma_array(nr_lin,nr_col,array);

    int array2[5] = {1,2,3,4,5};
    int* ptr;
    ptr = array2;

    printf("PTR = %p\n",ptr);
    printf("PTR = %p\n",ptr+1);

    //for(int )

    return 0;

}

void suma_array(int nr_lin, int nr_col, int array[nr_lin][nr_col])
{
    int suma = 0;
    for(int i = 0;i < nr_lin; i++)
    {
        for(int j = 0; j < nr_col; j++ )
        {
            suma = suma + array[i][j];
        }
    }

    printf("Suma este %d\n",suma);
}

void citire_array(int nr_lin, int nr_col, int array[nr_lin][nr_col])
{
    int suma = 0;
    for(int i = 0;i < nr_lin; i++)
    {
        for(int j = 0; j < nr_col; j++ )
        {
            printf("Elem [%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
}