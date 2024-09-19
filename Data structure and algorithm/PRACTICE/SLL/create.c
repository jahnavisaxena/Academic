#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void print()
{
    struct node *temp=head;
    printf("List is:\n");
    while(temp !=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node *createnode(int x)
{
    struct node *first=(struct node*)malloc(sizeof(struct node));
    first->data=x;
    first->next=NULL;
    return first;
}
void athead(int x)
{
    struct node *temp=head;
    struct node *first=createnode(x);
    first->next=head;
    head=first;
}
void main()
{
    head=NULL;
    athead(4);
    athead(5);
    athead(6);
    print();
}
