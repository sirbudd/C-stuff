#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50] = "Dragos";
    char s2[50] = " Daniel";
    char s3[50] = "testare";

    strncpy(s3,s1,3);
    printf(s3);
    printf("\n");

    strcat(s1,s2);
    printf(s1);
    printf("\n");

    int rezultat = strcmp(s3,s1);
    printf("length of first string = %ld\n",strlen(s3));
    printf("size of string %ld\n",sizeof(s3));
    return 0;
}