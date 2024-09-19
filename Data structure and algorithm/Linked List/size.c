#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
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
    printf("size of linked is :%d",size);
}
void main()
{
    head=NULL;
    insert(5);
    insert(6);
    insert(90);
    insert(65);
    insert(43);
    insert(33);
    insert(99);
    print();
    size();
}