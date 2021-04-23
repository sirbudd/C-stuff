//Const data types (what it is, declaration, input variables as const)

#include <stdio.h>
#include <stdlib.h>

#define x 10
//#define y (y*y)

int main()
{
    printf("X = %d\n",x);
    //scanf("%d",&x);

    const int test1;
    const int test2 = 20;
    scanf("%d",&test1);
    printf("Test1 = %d",test1);

    scanf("%d",&test2);
    printf("Test2 = %d",test2);
    return 0;
} 