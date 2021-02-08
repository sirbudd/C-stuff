#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

int main()
{
    char c1[50] = "Dragos";
    char c2[50] = "Test";

    memset(c1,c2,4);
    printf(c1);
    printf("\n");


}