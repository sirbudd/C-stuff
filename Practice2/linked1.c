#include <stdio.h>
#include <stdlib.h>

//creating a simple linked list node

struct node{
    int data;
    struct node *link;
};

int main()
{   
    struct node *head = NULL; //pointer la struct
                              //poate accesa tot din struct.
                              //pointer to the first node of the list
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;
    printf("Data = %d\n",head->data); // -> basically pointer pt structuri in loc de .
    free(head);
    return 0;
}