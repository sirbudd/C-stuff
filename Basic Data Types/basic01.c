#include <stdio.h>

/**
 * Basic Variable types
 * char,shot,int,long,float,double
 *  
*/
int main()
{
    unsigned char a = 255; //limita e 256 
    a = a+2;               // pt ca adunam 2 osa avem 257 > overflow > reset la 0 + restul
    printf("%u\n",a);

    

    return 0;
}