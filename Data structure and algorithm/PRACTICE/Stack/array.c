#include<stdio.h>
#define MAX 101
int a[MAX];
int top=-1;//empty stack

void push(int x)
{
    if(top== MAX-1){
        printf("Overflow");
        return;
    }
    a[++top]=x;
}
void pop()
{
    if(top==-1){
        printf("underflow");
        return;
    }
    top--;
}
void Top()
{
    printf("Top is: %d",a[top]);

}

void display()
{
    printf("stack is:");
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void main()
{
    push(2);
    display();
    push(4);
    display();
    push(5);display();
    pop();display();
    push(5);display();
    push(54);display();
    Top();
}