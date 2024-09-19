#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
 
};
void print(struct Node *ptr)
{
    printf("list is: \n");
    while(ptr!=NULL)
    {
        printf("%d,",ptr->data);
        ptr=ptr->next;
    }
}

void main()
{
    struct Node *head;
    struct Node *temp;
    struct Node *temp1;

    head=(struct Node*)malloc(sizeof(struct Node));
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp1=(struct Node*)malloc(sizeof(struct Node));

    head->data=3;
    head->next=temp;

    temp->data=4;
    temp->next=temp1;

    temp1->data=6;
    temp1->next=NULL;

    print(head);
}