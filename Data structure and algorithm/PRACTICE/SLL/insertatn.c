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
    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node *createnode(int x)
{
    struct node *sec=(struct node*)malloc(sizeof(struct node));
    sec->data=x;
    sec->next=NULL;
    return sec;
}
void insert(int x,int n)
{
    struct node *temp=head;
    struct node *sec=createnode(x);
    if(n==1)
    {
        if(head==NULL)
        {
            head=sec;
            return;
        }
        sec->next=head;
        head=sec;
        return;
    }
    for(int i=1;i<n-2;i++)
    {
        temp=temp->next;
    }
        sec->next=temp->next;
        temp->next=sec;
       
}
 void main()
    {
        head=NULL;
        insert(3,1);
        insert(5,1);
        insert(4,2);
        insert(9,3);
        insert(23,4);
        print();
    }
