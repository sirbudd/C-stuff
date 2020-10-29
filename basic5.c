#include <stdio.h>

//Write a C program to convert specified days into years, weeks and days.

int main()
{
    int days = 0;

    printf("Input nr zile = ");
    scanf("%i",&days);

    printf("%i zile inseamna : \n",days);
    
    int years = days/365;
    int weeks = (days % 365)/7;
    days = days -((years*365) + (weeks*7));

    printf("Years = %i\n",years);
    printf("Weeks = %i\n",weeks);
    printf("Days = %i\n",days);
    return 0;
}