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

struct node *Inserted(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void insert(int x,int n)
{
    struct node *temp1=head;
    struct node *newnode=Inserted(x);
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
    for(int i=1;i<n-1;i++)
    {
        temp1=temp1->next;
    }
    newnode->prev=temp1;
    newnode->next=temp1->next;
    temp1->next=newnode;
    if(newnode->next != NULL)
    {
    temp1=newnode->next;
    temp1->prev=newnode;
    }
}
int main()
{
    head=NULL;
    insert(34,1);
    insert(4,1);
    insert(5,2);
    insert(65,3);
    print();
    return 0;
}