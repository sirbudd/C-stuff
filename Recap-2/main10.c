//Structs (define a structure, access its members, copying data from one structure to another one)

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct student{
    int varsta;
    char* oras;
};

struct universitate{
    struct student info;
    char* univ;
    char* facultate;
};

int main()
{
    printf("test structuri\n");
    struct student s1;
    s1.oras = "Arad";
    s1.varsta = 20;

    struct universitate s2;
    s2.info.oras = "Cluj";
    s2.univ = "Biologie";

    printf("Studentul 2 este din %s si studiaza la %s\n",s2.info.oras,s2.univ);

    return 0;
}
