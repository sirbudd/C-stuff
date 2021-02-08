#include <stdio.h>
#include <stdlib.h>

//simple linked list
//adding a node at the end of the list

struct node
{
    int data;
    struct node *link;
};

void add(struct node *head, int data);

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    add(head, 4);
    add(head, 5);

    if(head == NULL)
    {
        printf("List is empty\n");
    }

    while(head != NULL)
    {
        printf("Elementul are valaore = %d\n",head->data);
        head = head->link;
    }
    
    return 0;
}

void add(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head; 
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}