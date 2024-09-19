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
    printf("list is:\n");
    while(temp != NULL)
    {
        printf("%d\t",temp->datrwa);
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
void findmax()
{
    struct node *temp=head;
    struct node *max=head;
    while(temp != NULL)
    {
        if(temp->data>max->data)
        {
            max=temp;
        }
        temp=temp->next;     
    }
    printf("maximum value of linked list is:%d\n",max->data);
}
void findmin()
{
    struct node *temp=head;
    struct node *min=head;
    while(temp != NULL)
    {
        if(temp->data<min->data)
        {
            min=temp;
        }
        temp=temp->next;
    }
    printf("minimum value of linked list is:%d",min->data);
}
void main()
{
    head=NULL;
    insert('h');
    insert('i');
    insert('w');
    insert('m');
    insert('y');
    insert('a');
    insert('e');
    insert('r');
    insert('s');
    insert('s');
    print();
    findmax();
    findmin();
    
    

}