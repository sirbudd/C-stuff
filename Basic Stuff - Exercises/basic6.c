#include <stdio.h>

//Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour.

int main()
{
    int id = 0;
    int wrk_hrs = 0;
    int salary = 0;

    printf("Employee ID = ");
    scanf("%i",&id);
    printf("Working Hours = ");
    scanf("%i",&wrk_hrs);
    printf("Salary = ");
    scanf("%i",&salary);

    printf("Employee ID : %d \n",id);
    printf("Salary = %d USD\n",salary*wrk_hrs);

    return 0;
}