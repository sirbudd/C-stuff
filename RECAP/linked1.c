#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

void add(struct node *head, int data);

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;

    printf("Simple linked list cu 2 node uri\n");

    if(head == NULL)
        printf("The list is empty\n");

    while(head != NULL)
    {
        printf("Data = %d \n",head->data);
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

struct node* add_beginning(struct node *head,int data) // putem cu pointer dublu
{                                                      //void add(struct node **head, int data)
    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    temp->link = head;
    head = temp;
    return head;
}

void add_position(struct node *head, int data, int pos)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    pos = pos - 1;
    while(pos != 1)
    {
        head = head->link;
        pos--;
    }
    ptr->link = head;
}