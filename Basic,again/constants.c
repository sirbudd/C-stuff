#include <stdio.h>

//constante
//functie care ia o valoare si o face constanta
//cam useless sa facem o functie care "inapoiaza" o constanta
void functie(int user_input);

int main()
{
    const int x = 10;

    /**
    scanf("%d",&x);    se poate schimba dar este undefined behavior
    **/
    // x = 5;          eroare, nu putem modifica o constanta

    printf("conts 1 : %d\n",x);

    int n;
    scanf("%d",&n);
    functie(n);

    n = 3;

    printf("Constanta = %d\n",n);

    return 0;
}

void functie(int user_input)
{
    const int userinput = user_input;
}