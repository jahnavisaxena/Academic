#include<stdio.h>
 void bubble(int arr[])
 {
    int n = 5;
    for(int turn= 0;turn<n - 1;turn++)
    {
        for(int j=0;j<n-1-turn;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    int arr[5] = {5,4,1,3,2};
    bubble(arr);
    print(arr);

 }