#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int main()
{
    int x =5;
    int *ptr = &x;
    *ptr = 10;
    printf("PTR = %d \n",*ptr);

    char test[10] = "test ok";
    printf(test);
    printf("\n");
    printf("%s\n",test);
    puts(test);
    return 0;
}