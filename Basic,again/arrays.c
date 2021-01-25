#include <stdio.h>

//arrays

int main()
{
    int array1 [] = {5,2,3};

    printf("Primul element este %d \n",array1[0]);

    int n[ 10 ]; /* n is an array of 10 integers */
    int i,j;
 
   /* initialize elements of array n to 0 */         
    for ( i = 0; i < 10; i++ ) {
       n[ i ] = i + 100; /* set element at location i to i + 100 */
    }
   
   /* output each array element's value */
    for (j = 0; j < 10; j++ ) {
       printf("Element[%d] = %d\n", j, n[j] );
    }
    
    /**

    int z[5];
    int input;

    printf("Input pt valori : ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d",&z[i]);
        printf("Val este %d \n",z[i]);
    }
    
    **/

    int y[3];
    int suma = 0;
    double average;

    for (i = 0; i < 5; i++)
    {
        scanf("%d",&y[i]);
        printf("Val este %d \n",y[i]);

        suma = suma + y[i];
    }

    average = (double)suma/5;
    printf("Average = %0.2lf \n",average);


    
    return 0;
}