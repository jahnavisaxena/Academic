#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head1=NULL;
struct node *head2=NULL;
void print(struct node *head)
{
    struct node *temp=head;
    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node *create(int x)
{
    struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=x;
    nn->next=NULL;
    nn->prev=NULL;
    return nn;
}
struct node  *insert(struct node *head,int x)//head ko return krna zaoori hai
{
    struct node *nn=create(x);
    struct node *temp=head;
    if(head==NULL)
    {
        head=nn;
        return head;
    }
    head->prev=nn;
    nn->next=head;
    head=nn;
    return head;
}
void main()
{

    printf("LIST 1 IS:\n");
    head1=insert(head1,3);
    head1=insert(head1,50);
    head1=insert(head1,9);
    head1=insert(head1,4);
    print(head1);
    
    printf("LIST 2 IS :\n");
    head2=insert(head2,33);
    head2=insert(head2,4);
    head2=insert(head2,66);
    head2=insert(head2,2);
    print(head2);
}