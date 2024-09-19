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
void insert(int x,int n)
{
    struct node *temp=head;
    struct node *newnode=createnode(x);
    if(n==1)
    {
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
        return;
    }
    for(int i=1;i<n-2;i++)
    {
      temp=temp->next;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    if(newnode->next != NULL)
    {
        temp=newnode->next;
        temp->prev=newnode;
    }
}
void main()
{
    head=NULL;
    insert(3,1);
    print();
    insert(2,2);
    print();
    insert(5,3);
    print();
    insert(4,3);
    print();
}