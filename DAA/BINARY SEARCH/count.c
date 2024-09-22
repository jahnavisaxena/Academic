#include<stdio.h>
int CountElement(int arr[],int n,int x)
{
    int counter =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            counter++;
        }
    }
    return counter;
}
void main()
{
    int nums[] = {1,2,4,4,5,6,7,8,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("%d" , CountElement(nums,n,4));
}
