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
  printf("list is:\n");
  do
  {
    printf("%d\t",temp->data);
    temp=temp->next;
  } while (temp != head);
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
    struct node *new=create(x);
    struct node *temp=head;
    
    
}