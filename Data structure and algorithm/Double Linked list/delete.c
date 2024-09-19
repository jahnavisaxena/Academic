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
        printf("%d\t ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node *inserting(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode; 
}
void insert(int x)
{
    struct node *newnode=inserting(x);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
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

void main()
{
    head=NULL;
    insert(3);
    insert(5);
    insert(6);
    insert(11);

    print();
    delete(2);
    print();
    
    }