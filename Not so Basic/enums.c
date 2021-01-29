#include <stdlib.h>
#include <stdio.h>

enum WEEKDAY { 
    monday,
    tuesday,
    wednesday
};

int main()
{
    enum WEEKDAY day0;
    day0 = monday;
    printf("Day : %d\n",day0);
    return 0;
}