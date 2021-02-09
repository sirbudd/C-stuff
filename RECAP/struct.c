#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student
{
    int age;
    char name[50];
};

struct Detalii
{
    int an_univ;
    struct Student detalii;
};


int main()
{
    struct Student s1;
    s1.age = 30;
    strcpy(s1.name,"Alex");

    struct Detalii s2;
    s2.detalii.age = 30;
    s2.an_univ = 5;

    printf("Studentul 1 = %d, %s\n",s1.age,s1.name);
    printf("Studentul 2 = %d, %d\n",s2.detalii.age,s2.an_univ);
    return 0;
}
