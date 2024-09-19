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
    struct node *temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    return temp1;
}
void insert(int x,int n)
{
    struct node *temp=head;
    struct node *temp1=createnode(x);
    if(n==1)
    {
        if(head==NULL)
        {
            head=temp1;
            return;
        }
        temp1->next=head;
        head=temp1;
        return;
    }

    for(int i=1;i<n-2;i++)
    {
        temp=temp->next;
    }
    temp1->next=temp->next;
    temp->next=temp1;
}
void delete(int n)
{
    struct node *temp1=head;
    for(int i=1;i<n-2;i++)
    {
    temp1=temp1->next;
    }
    struct node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}
void main()
{
    head=NULL;
    int n;
    insert(2,1);
    insert(3,2);
    insert(6,3);
    insert(9,3);
    insert(7,4);
    print();
    printf("Entet the position to delete: ");
    scanf("%d",&n);
    delete(2);
    print();
}