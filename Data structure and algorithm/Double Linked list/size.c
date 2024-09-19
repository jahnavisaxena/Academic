#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node*next;
    struct node *prev;
};
struct node *head;
void print()
{
    struct node *temp=head;
    printf("list is:\n");
    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node *create(int x)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=x;
    n->next=NULL;
    n->prev=NULL;
    return n;
}
void insert(int x)
{
    struct node *temp=head;
    struct node *n=create(x);
    if(head==NULL)
    {
       head=n;
       return;
    }
    head->prev=n;
    n->next=head;
    head=n;
}
void size()
{
struct node *temp=head;
int size=0;
while(temp != NULL)
{
    size++;
    temp=temp->next;
}
    printf("size of DDL is:%d",size);
}
void main()
{
    head=NULL;
    insert(3);
    insert(5);
    insert(6);
    insert(9);
    insert(66);
    insert(55);
    print();
    size();
}