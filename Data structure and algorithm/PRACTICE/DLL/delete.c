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
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
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
void delete(int n)
{
        struct node *temp=head;
        if(n==1)
        {
            head=temp->next;
            head->prev=NULL;
            free(temp);
            return;
        }
        for(int i=1;i<n;i++)
        {
            temp=temp->next;
        }
        struct node *temp2=temp->prev;
        temp2->next=temp->next;
        temp2=temp->next;
        temp2->prev=temp->prev;
        free(temp);
}
void reverse()
{
  struct node *temp=head;
  if(temp==NULL)
  {
    return;
  }

  while(temp->next != NULL)
  {
    temp=temp->next;
  }
  printf("reverse list is:\n");
  while(temp != NULL)
  {
  printf("%d\t",temp->data);
  temp=temp->prev;
  }
  printf("\n");
}
void main()
{
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(9,2);
    insert(5,3);
    insert(32,3);
    insert(90,2);
    print();
    delete(3);
    print();
    reverse();
}
