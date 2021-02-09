#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *myTurn(void *arg)
{
    while(1)
    {
        printf("My turn \n");
        sleep(1);
    }
}

void YourTurn()
{
    while(1)
    {
        printf("Your turn\n");
        sleep(3);
    }   
}

int main()
{
    pthread_t thread1;
    pthread_create(&thread1,NULL,myTurn,NULL);
    sleep(1);
    YourTurn();

    pthread_join(thread1,NULL); //asteptam ca threadul respectiv sa si termine operatia 
    return 0;
}