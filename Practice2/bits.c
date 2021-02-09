#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n = 5234;
    int temp[100];
    int size = sizeof(n);
    printf("size of n = %d\n",size);
    for(int i = 0;i < size; i++)
    {
        while(n != 0)
        {
            temp[i] = n % 10;
        }
    }
    for(int i = 0;i < size; i++)
    {
        printf("%d\n",temp[i]);
    }
    return 0;
}