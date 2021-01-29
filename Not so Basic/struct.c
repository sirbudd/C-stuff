#include <stdio.h>

struct Person{
    int age;
    char city[50];
    char gender[50];
};

struct Student{
    struct Person info;
    char Nume[50];
    int an_uni;
};

int main()
{
    struct Person person1;
    person1.age = 20;

    struct Person person2 = {30,"Londra","Male"};

    struct Student student1;
    student1.info.age = 30;
    student1.an_uni = 2;

    printf("Varsta primei persoane este : %d\n",person1.age);
    printf("Varsta student 1 = %d \n",student1.info.age);
    printf("An univ student1 = %d\n",student1.an_uni);

    return 0;
}