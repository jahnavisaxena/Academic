#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
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
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    return new;
}
struct node *insert(struct node *head,int x)
{
    struct node *temp=head;
    struct node *new=create(x);
    if(head==NULL)
    {
        head=new;
        return head;
    }
    new->next=head;
    head=new;
    return head;
}
void main()
{
    printf("List 1 is:\n");
    head1=insert(head1,54);
    head1=insert(head1,21);
    head1=insert(head1,44);
    head1=insert(head1,11);
    head1=insert(head1,30);
    print(head1);

    printf("List 2:\n");
    head2=insert(head2,5);
    head2=insert(head2,52);
    head2=insert(head2,34);
    head2=insert(head2,12);
    head2=insert(head2,1);
    print(head2);
}