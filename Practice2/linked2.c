#include <stdio.h>
#include <stdlib.h>

//creating a simple linked list node

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link = current; //updatam partea LINK din nodeul anterior, in cazul nostru HEADUL.

    current = malloc(sizeof(struct node));
    current->data = 55;
    current->link = NULL;

    head->link->link = current; //facem legature intre nodeul 2 si 3.
    printf("Elementele nodeului sunt %d %d  \n",head->data,current->data);

    free(head);
    return 0;
}