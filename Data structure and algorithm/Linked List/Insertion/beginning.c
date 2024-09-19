#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};

struct Node *head;
void insert(int x)
{ 
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print()
{
    struct Node *temp=head;
    printf("list is: \t");
    while(temp!=NULL)
    {
        printf("%d,",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void main()
{
    head=NULL;
    int i,n,x;
    printf("how many numbers u want to enter:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the numbers:  ");
        scanf("%d",&x);
        insert(x);
        print();
    }
}