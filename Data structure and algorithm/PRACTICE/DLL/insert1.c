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
struct node *createnode(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void insert(int x)
{
    struct node *newnode=createnode(x);
    if(head=NULL)
    {
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void main()
{
    head=NULL;
    insert(3);
    print();
    insert(5);
    print();
    insert(7);
    print();
    insert(76);
    print();
}