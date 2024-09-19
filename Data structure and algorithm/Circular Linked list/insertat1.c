#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *tail;
void print()
{
    struct node *temp=tail;
    printf("List is:\n");
    do
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    } while (temp->next!=tail);
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
    struct node *new=create(x);
    struct node *temp=tail;
    if(tail==NULL)
    {
        tail=new;
        return;
    }
    new->next=tail->next;
    tail->next=new;
}
void main()
{
   tail=NULL;
   insert(3);print();
   insert(4);print();
   insert(9);print();
   insert(90);print();
   
}
