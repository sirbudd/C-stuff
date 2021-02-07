#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* myturn(void *arg) //functiile de tip thread trb sa fie de tip void * si sa aiba ca argument un pointer
{
    for(int i = 0; i < 8; i++)
    {
        sleep(1);
        printf("Randul meu 1 //%d \n",i);
    }
    return NULL;
}

void yourturn()
{
    for(int i = 0; i < 3; i++)
    {
        sleep(2);
        printf("Randul meu 2 //%d \n",i);
    }
}

int main()
{
    printf("Threads \n");
    pthread_t thread1;
    pthread_create(&thread1, NULL, myturn, NULL);
    yourturn();

    pthread_join(thread1, NULL); //asteapta pana cand X thread a terminat de rulat si dupa continua programul
    return 0;
}