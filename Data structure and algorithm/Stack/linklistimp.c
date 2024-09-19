//sirf beginning mein add and delete or pop and push

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void print()
{
    struct node *temp=top;
    printf("list is:\n");
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
}+
void push(int x)
{
    struct node *new=create(x);
    new->next=top;
    top=new;
}
void pop()
{
    struct node *new;
    if(top == NULL)
    {
        return;
    }
    new=top;
    top=top->next;
    free(new);
}
void main()
{
    push(3);print();
    push(4);print();
    push(2);print();
    push(99);print();
    pop();print();
    push(33);print();
    push(23);print();
    pop();print();
}
