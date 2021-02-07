#include <stdio.h>
#include <stdio.h>
#include <string.h>

//struct & enum

enum weekdays
{
    monday,saturday
};

struct Student
{
    char nume[50];
    char oras[50];
    int varsta;
};

struct Univ
{
    int an_univ;
    char univ[50];
    struct Student info;
};

int main()
{
    struct Student s1;
    s1.varsta = 30;
    strcpy(s1.nume,"Dragos");
    struct Univ s2;
    strcpy(s2.info.nume,"Daniel");
    s2.an_univ = 5;
    printf("Primul student : %d , %s\n",s1.varsta,s1.nume);
    printf("Al doilea student : %d , %s\n",s2.an_univ,s2.info.nume);
    return 0;
}