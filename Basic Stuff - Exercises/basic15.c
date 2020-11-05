#include <stdio.h>

#define password 1234

//Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print 
//"Correct password" and quit the program.

int main()
{   
    int n = 0;
    printf("Input password = ");
    scanf("%d",&n);

    if(n == password)
    {
        printf("Correct password\n");
    } 
    else
    {
        printf("Incorrect password\n");
    }
    
    return 0;
}