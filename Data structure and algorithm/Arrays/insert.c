#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insert(int arr[],int size,int element,int capacity,int index)
{
    if(size>capacity)
    {
        return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
void main()
{
    int arr[20]={7,12,45,23,78};
    int size=5;
    int capacity=20;
    int element=60;
    int index=3;
    printf("size earlier:%d\n",size);
    insert(arr,size,element,20,index);
    display(arr,size);
    size+=1;
    display(arr,size);
    printf("now size of array is: %d",size);
}