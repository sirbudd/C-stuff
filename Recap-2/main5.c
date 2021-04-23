//Static variables (inside function, outside function )

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int test()
{
    static int count;
    count++;
    printf("Nr = %d\n",count);
}

int main()
{
    test();
    test();
    test();

    return 0;
}