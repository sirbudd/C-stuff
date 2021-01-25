#include <stdio.h>

//operators

int main()
{
    int a = 2;
    int b;

    b = a++;
    b = a++; //increment A dupa ce il folosim deci in realitate b = a-1
    printf("A = %d\n",a);
    printf("B = %d\n",b);

    b = ++a; //increment A inainte de fol, deci b = a in timp real.
    printf("A = %d\n",a);
    printf("B = %d\n",b);

    int c = 20;
    printf("%ld\n",sizeof(c));     //sizeof() retuns the size of the var/type
    printf("%ld\n",sizeof(int));

    printf("%d\n",&c); //printam adresa
    return 0;
}