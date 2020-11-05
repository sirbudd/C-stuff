#include <stdio.h>

//Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes


int main()
{
    int amount = 0;

    printf("Amount of money = ");
    scanf("%d",&amount);

    printf("Change for %d is :\n",amount); //cerem amaountul si dupa il afisam

    int rest = 0;

    rest = amount/100;
    printf("Bancnote de 100 = %d\n",rest); // la fiecare "iteratie" impartim amountul la bancnota respectiva si dupa scadem
                                           //din amonut numarul de bancnote.
    amount = amount - rest*100;

    rest = amount/50;
    printf("Bancnote de 50 = %d\n",rest);

    amount = amount - rest*50;

    rest = amount/10;
    printf("Bancnote de 10 = %d\n",rest);

    amount = amount - rest*10;

    rest = amount/1;
    printf("Bancnote de 1 = %d\n",rest);

    amount = amount - rest*1;

    return 0;
}