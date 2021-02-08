#include <stdio.h>
#include <stdlib.h>

//creating a simple linked list node
//traversing it and printing the number of nodes

struct node
{
    int data;
    struct node *link;
};

int main()
{
    int contor = 0;

    printf("Printing linked list number of nodes and data\n");

    struct node *head = malloc(sizeof(struct node));
    head->data = 30;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 55;
    current->link = NULL;

    head->link->link = current;
    printf("Elementele nodeului sunt = %d, %d\n",head->data,current->data);

    if(head == NULL)
    {
        printf("List is empty\n");
    }

    while(head != NULL)
    {
        contor++;
        printf("Elementul %d are valaore = %d\n",contor,head->data);
        head = head->link;
    }
    
    free(head);
    free(current);

    return 0;
}