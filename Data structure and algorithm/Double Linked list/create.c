#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void print()
   {
    struct node *temp=head;
    while(temp != NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    printf("\n");
   }
void main()
{
    struct node *first;
    struct node *sec;
    struct node *third;
    struct node *last;


    first=(struct node*)malloc(sizeof(struct node));
    sec=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    last=(struct node*)malloc(sizeof(struct node));

    head=first;
    first->data=5;
    first->prev=NULL;
    first->next=sec;

    sec->data=12;
    sec->prev=first;
    sec->next=third;

    third->data=51;
    third->prev=sec;
    third->next=last;

    last->data=98;
    last->prev=third;
    last->next=NULL;

    print();


}