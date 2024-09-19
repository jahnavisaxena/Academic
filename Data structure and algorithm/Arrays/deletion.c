#include<stdio.h>
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int delete(int arr[],int size,int capacity,int index)
{
    if(index>=capacity)
    {
        return -1;
    }
    for(int i=index;i< size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;

}
void main()
{
    int arr[60]={12,23,4,31,4};
    int size=5;
    int index=2;
    display(arr,size);
    delete(arr,size,60,index);
    size-=1;//size chota ho jaega
    display(arr,size);

}