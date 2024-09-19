#include<stdio.h>
#define MAX 101//its like poore code ke liye define ho jaata hai so its more readable
int a[MAX];
int top=-1;//pehle se hi empty list maanke chal rhi
void push(int x)
{
    if(top== MAX- 1)
    {
        printf("full");
        return;
    }
    a[++top]=x;//pehle increment ho top position fir data enter ho
}
void pop()
{
    if(top == -1)
    {
        printf("Empty");
        return;
    }
    top=top-1;
}
int Top()
{
    return a[top];
}
void print()
{
    printf("stack :");
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void  main()
{
    push(3);
    print();
    push(2);
    print();
    push(3);
    print();
    pop();
    print();
    Top();
}