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
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    return new;
}
void insert(int x)
{
    struct node *temp=head;
    struct node *new=create(x);
     if(head==NULL)
        {
            head=new;
            return;
        }
        new->next=head;
        head=new;
        return;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
}
void main()
{
    head=NULL;
    insert(3);
    print();
    insert(4);
    print();
    insert(9);
    print();
    insert(4);
    print();
}