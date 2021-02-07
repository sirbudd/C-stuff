#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

//using mutex to be able to use 2 threads for the same for

#define BIG 200000
int counter = 0;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void*functie (void * arg)
{
    //pthread_mutex_t lock;
    //pthread_mutex_init (&lock,NULL);
    for(int i = 0;i < BIG; i++)
    {
        pthread_mutex_lock(&lock);
        counter++;
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main()
{
    pthread_t t1,t2;
    pthread_create(&t1,NULL,functie,NULL);
    functie(NULL);
    pthread_join(t1,NULL);
    printf("Done counting %d \n",counter);
    return 0;
}