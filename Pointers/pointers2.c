#include <stdio.h>

//finding min and max using pointers

void MinMax (int a[],int len,int *min,int *max);

int main()
{
    int a[]  = {20,32,33,34,19};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);

    MinMax(a,len,&min,&max);
    printf("Min = %d\nMax = %d\n",min,max);
    return 0;
}

void MinMax (int a[],int len,int *min,int *max)
{
    *min = *max = a[0]; //we get the address of min and max from main to be able to modify them
    for (int i = 0; i < len; i++)
    {
        if(a[i] > *max)
        {
            *max = a[i];
        }
        if(a[i] < *min)
        {
            *min = a[i];
        }
    }
}