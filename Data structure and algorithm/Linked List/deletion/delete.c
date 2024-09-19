#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
struct Node *head;
 void insert(int data,int n)
{
    struct Node*temp1=(struct Node*)malloc(sizeof(struct Node));
    struct Node*temp2=(struct Node*)malloc(sizeof(struct Node));
    temp1->data=data;
    temp1->next=NULL;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1; 
}

void print()
{
    struct Node *temp1=head;
    printf("List is:\t");
    while(temp1!=NULL)
    {
        printf("%d,",temp1->data);
        temp1=temp1->next;
    }
}
void delete(int n)
{
struct Node *temp1=head;
for(int i=0;i<n-1;i++)
{
    struct Node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}
}
void  main()
{
  head=NULL;
  int n;
  insert(2,1);
  insert(4,1);
  insert(9,3);
  insert(5,2);
  print();
  printf("\nenter the position to delete :\n");
  scanf("%d",&n);
  delete(n);
  print();
}