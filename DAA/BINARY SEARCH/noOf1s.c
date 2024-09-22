#include<stdio.h>
int binary(int nums[],int n)
{
    int start =0,end =n-1;
    int ans =0;

    while(start<= end)
    {
        int mid = start +(end - start)/2;
        if(nums[mid] == 0)
        {
            start = mid +1;
        }
        else if(nums[mid] == 1)
        {
            ans = n-mid;
            end = mid-1;
        }
    }
    return ans;
}

void main()
{
    int nums[] = {0,0,0,1,1,1,1};
    int n =sizeof(nums)/sizeof(nums[0]);
    printf("%d is the number of 1s in array",binary(nums,n));
}
 
