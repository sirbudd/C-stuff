#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

sem_t semaphore1;

void *functie (void*arg)
{
    sem_wait(&semaphore1);
    printf("\nEntered\n");

    sleep(5);

    printf("Almost out...\n");
    sem_post(&semaphore1);
}

int main()
{
    sem_init(&semaphore1,0,1);
    pthread_t thread1,thread2;

    pthread_create(&thread1,NULL,functie,NULL);
    sleep(2);
    pthread_create(&thread2,NULL,functie,NULL);
    pthread_join(thread1,NULL); //ne asiguram ca threadurile 1 si 2 termina inainte de a iesi din program
    pthread_join(thread2,NULL);
    sem_destroy(&semaphore1);
    pthread_exit(NULL);

    return 0;
}