#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH 5 //max size of stack is 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

int mystack[STACK_LENGTH];
int top = EMPTY;

bool push(int value)
{
    if (top >= STACK_LENGTH-1)
    {
        return false;
    }
    top++;
    mystack[top] = value;
    return true;
}

int pop()
{
    if (top == EMPTY )
    {
        return STACK_EMPTY;
    }
    int result = mystack[top];
    top--;
    return result;
}

int main()
{
    push(56);
    push(23);
    push(40);

    int popped;
    while((popped = pop()) != STACK_EMPTY )
    {
        printf("popped = %d\n",popped);
    }
    return 0;
}