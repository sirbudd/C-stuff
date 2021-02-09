#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

//thread safety
#define BIG 100000000UL

int counter = 0;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
void *count(void *arg)
{
    for(int i = 0; i < BIG; i++)
    {
        pthread_mutex_lock(&lock);
        counter++;
        pthread_mutex_unlock(&lock);
    }
    return NULL;
}

int main()
{
    pthread_t thread1;
    printf("Thread safety \n");
    pthread_create(&thread1,NULL,count,NULL);
    count(NULL);
    pthread_join(thread1, NULL);
    printf("Done counting %d \n",counter);

    return 0;
}