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
void insert(int x)
{ 
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=head;
    head=new;
}
void delete()
{
    struct node *new;
    new=head;
    head=head->next;
    free(new);
}
void deleteatn(int n)
{
struct node *temp1=head;
for(int i=0;i<n-1;i++)
{
    struct node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}
}
void deleteatend()
{
    struct node *last,*second;
    last=head;
    while(last->next != NULL)
    {
        second=last;
        last=last->next;
    }
    if(last == head)
    {
        head=NULL;
        return;
    }
    second->next=NULL;
    free(last);
}
void main()
{
    int n;
    head=NULL;
    insert(3);
    insert(4);
    insert(90);
    insert(33);
    insert(31);
    print();
    delete();
    print();
    deleteatn(3);
    print();
    deleteatend();
    print();
}