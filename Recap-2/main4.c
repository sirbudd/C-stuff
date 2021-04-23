//Literals (Calculate the size/length of a string literal; strlen vs sizeof)  

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char string1[10] = "Hello, ";
    char string2[10] = "Daniel";
    char string3[5] = "Test";

    strcat(string1,string2);
    printf(string1);
    printf("\n");

    int length = strlen(string3);
    printf("Length = %d\n",length);

    int size = sizeof(string3);
    printf("Size = %d\n",size);
    return 0;
}


