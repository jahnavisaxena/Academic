#include<stdio.h>
void insertionSort(int arr[])
{
    int n=5;
    for(int i=1;i<n;i++)
    {
        int curr = arr[i];
        int prev =i-1;
        while(prev>=0 && arr[prev]> curr)
        {
            arr[prev + 1]=arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
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
    int n=5;
    int arr[] = {5,4,1,3,2};
    insertionSort(arr);
    print(arr);
    
}