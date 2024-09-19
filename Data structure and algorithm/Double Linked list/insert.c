#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void print()
{
    struct node *temp=head;
    printf("List is:\n");
    while(temp != NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node *Inserting(int x)//function to create a new node
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void insert(int x)//
{
    struct node *newnode=Inserting(x);//newnode jo bana hai uska address store krta hai, this function creates links
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void reverse()
{
    struct node *temp=head;
    if(temp==NULL)
    {
        return;
    }
    while(temp->next != NULL)
    {
        temp=temp->next;//going to last node
    }
    
    printf("Reverse: \n");//last node tak chala gya ab waha se traverse karega
    while(temp !=NULL)
    {
        printf("%d, ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
void main()
{
    head=NULL;
    insert(3);
    print();
    insert(4); 
    print();
    insert(5);
    print();
    insert(9);
    print();
    reverse();

}
