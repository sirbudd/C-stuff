#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

//threads

void *turn1(void*arg)
{
    while(1)
    {
        printf("1\n");
        sleep(1);
    }
    
}

void turn2()
{
    while(1)
    {
        printf("2\n");
        sleep(3);
    }
}

int main()
{
    printf("Threads \n");
    pthread_t thread1;
    pthread_create(&thread1,NULL,turn1,NULL);
    turn2();

    pthread_join(thread1,NULL);
    return 0;
}