#include<stdio.h>
int peakElement(int nums[],int n)
{
    int peak = -1;
    for(int i=0;i<n;i++)
    {
     
        if(nums[i] > nums[i+1] && nums[i] > nums[i-1])
        {
            peak = nums[i];
        }
    }
    return peak;
}
void main()
{
    int nums[]= {1,2,3,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf(" peak element is: %d",peakElement(nums,n));
}
