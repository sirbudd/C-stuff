#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    printf("Val lui ptr = %d\n",*ptr);
    *ptr = 20;
    printf("Val lui ptr = %d\n",*ptr);
    printf("Val lui x = %d\n",x);

    char *s;
    s = malloc(1024 * sizeof(char));  //am alocat memorie 1024
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1); //realocam memoria ca sa fie cat avem nev, nu mai mult

    int array[] = {1,2,3};
    int *ptr2 = &array[1];
    printf("Pointer la array = %d\n",*ptr2);
}