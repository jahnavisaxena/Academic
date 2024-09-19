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
    struct node *n=create(x);
    struct node *temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    head->prev=n;
    n->next=head;
    head=n;
}
void findmax()
{
    struct node *temp=head;
    struct node *max=head;
    while(temp != NULL)
    {
        if(temp->data>max->data)
    {
        max=temp;
    }
    temp=temp->next;
    }
    printf("Maximum node is :%d\n",max->data);    
}
void findmin()
{
    struct node *temp=head;
    struct node *min=head;
    while(temp != NULL)
    {
        if(temp->next<min->next)
        {
            min=temp;
        }
        temp=temp->next;
    }
    printf("Minimum node is :%d\n",min->data);
}
void main()
{
    head=NULL;
    insert(3);
    insert(4);
    insert(7);
    insert(9);
    insert(90);
    print();
    findmax();
    findmin();
}