#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int delete(int arr[],int size,int index)
{
    for(int i=index;i>size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;
}
void main()
{
    int arr[20]={45,3,2,87,65};
    int size=5;
    int capacity=20;
    int index=4;
    delete(arr,size,index);
    display(arr,size);
    size-=1;
    display(arr,size);
}