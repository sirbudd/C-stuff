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
void add_position(struct node *head, int data, int pos);


int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 2;
    head->link = NULL;

    head = add_beginning(head, 1);
    add(head, 4);
    add(head, 5);

    int position = 3, data = 6;
    add_position(head, data, position);

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