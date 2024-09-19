#include<stdio.h>
#include<stdbool.h>
#define SIZE 7
int arr[SIZE];
int front=-1;
int rear=-1;
bool isempty()
{
    return front==-1 && rear==-1;
}
 bool isFull()
 {
    return(rear +1)%SIZE==front;
 }
void enqueue(int x)
{
 
 if(isFull()) {
    printf("full");
    return;
 }
 if(isempty()){
   front=rear=0;
 }
 else {
    rear=(rear+1)% SIZE;
 }
 arr[rear]=x; 
}
void dequeue()
{
    if(isempty()){
        printf("empty");
        return;
    }
    else{
        front=(front+1) % SIZE;
    }  
}
void print()
{
   printf("Queue is: ");
    int count = (rear + SIZE - front) % SIZE + 1;
    for(int i = 0; i < count; i++) {
        int index = (front + i) % SIZE;
        printf("%d ", arr[index]);
    }
    printf("\n");
}  
void main()
{
    printf("Queue\n");
    enqueue(4);print();
    enqueue(2);
    print();
    enqueue(3);
    print();
    dequeue();
    print();
    enqueue(9);
    print();
    
}