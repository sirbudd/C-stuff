#include <stdio.h>

struct Person{
    int age;
    float weight;
    char gender[50];
};

struct Student{
    struct Person info;
    char Nume[50];
    int an_uni;
};

int main()
{
    struct Person *ptr, person1;
    ptr = &person1;

    printf("Enter age = ");
    scanf("%d",&ptr -> age);

    printf("Enter weight = ");
    scanf("%f",&ptr->weight);

    printf("Persoana 1 are varsta %d si greutatea %0.2f \n",person1.age,person1.weight);
}