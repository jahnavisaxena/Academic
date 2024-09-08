#include<stdio.h>
void selection(int arr[])
{
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int minPos = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minPos] > arr[j])
            {
                minPos = j;
            }
            
        }
        int temp = arr[minPos];
        arr[minPos]=arr[i];
        arr[i]=temp;
    }
}
void print(int arr[])
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void main()
{
    int arr[5]={5,4,1,3,2};
    selection(arr);
    print(arr);
}