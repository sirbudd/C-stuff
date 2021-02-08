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
struct node* add_beginning(struct node *head,int data);


int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 2;
    head->link = NULL;

    head = add_beginning(head, 1);
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
    struct node  *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(head->link != NULL)
    {
        head = head->link;
    }
    head->link = temp;
}

struct node* add_beginning(struct node *head,int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    temp->link = head;
    head = temp;
    return head;
}