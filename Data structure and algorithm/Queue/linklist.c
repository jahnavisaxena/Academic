#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    if(front ==NULL && rear==NULL){
        front=rear=new;
        return;
    }
    rear->next=new;
    rear=new;
}
void dequeue()
{
    struct node *new=front;
    if(front==NULL)
    {
        return;
    }
    if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    free(new);
}
void print()
{
    struct node *temp=front;
    printf("Queue: ");
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void main()
{
    enqueue(2);print();
    enqueue(3);print();
    enqueue(4);print();
    enqueue(5);print();
    enqueue(6);print();
    enqueue(1);print();
    dequeue();print();
}