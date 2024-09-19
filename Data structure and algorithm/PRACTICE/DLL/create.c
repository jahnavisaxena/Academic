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
    printf("List is:\n");
    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void main()
{
struct node *first;
struct node *sec;
struct node *third;

first=(struct node *)malloc(sizeof(struct node));
sec=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

head=first;
first->data=4;
first->next=sec;
first->prev=NULL;

sec->data=3;
sec->next=third;
sec->prev=first;

third->data=5;
third->next=NULL;
third->prev=sec;

print();
}