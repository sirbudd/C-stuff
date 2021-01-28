#include <stdio.h>

//simple program to get positive user input;

int get_positive_user_input();

int main()
{
    int x;
    x = get_positive_user_input();
    printf("x = %d \n",x);
    return 0;
}

int get_positive_user_input()
{
    int x;
    do{
        printf("User input : ");
        scanf("%d",&x);
    }while(x <= 0);
    return x;
}