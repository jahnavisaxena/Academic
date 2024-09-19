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
    printf("list is:\n");
    do
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    } while (temp->next != tail);
    printf("\n");    
}
struct node *create(int x)
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    return new;
}
void insertatlast(int x)
{
    struct node *new=create(x);
    struct node *temp=tail;
    if(tail == NULL)
    {
      tail=new;
      return;
    }
    new->next=tail->next;
    tail->next=new;
    tail=new;
}
void main()
{
    tail=NULL;
    insertatlast(3);
    insertatlast(4);
    insertatlast(54);
    insertatlast(23);
    insertatlast(43);
    print();
}