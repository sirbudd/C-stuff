#include <stdio.h>

//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds

int main()
{
    int n = 0;
    printf("number of seconds = ");
    scanf("%d",&n);

    printf("There are \n");
    int hours = n/3600;
    int minutes = (n - (hours*3600))/60;
    int seconds = n - hours*3600 - minutes*60;
    printf("Hours = %d\n",hours);
    printf("Minutes = %d\n",minutes);
    printf("Seconds = %d\n",seconds);

    return 0;
}