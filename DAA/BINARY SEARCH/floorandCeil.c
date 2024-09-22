/*
Example 1:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Example 2:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 8
Result: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.*/
#include<stdio.h>
int floor(int nums[],int n,int x)
{
    //floor is the largest number in array but smaller or equal to x
    //ceil is the smalledt number but greater or equal to x
    int start =0, end=n-1;
    int ans = -1;
    while(start <=end)
    {
        int mid = start + (end -start)/2;
        if(nums[mid] <= x)
        {
            ans = nums[mid];
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;

}
int ceil(int nums[],int n,int x)
{
    int start =0, end=n-1;
    int ans = -1;
    while(start <=end)
    {
        int mid = start + (end - start)/2;
        if(nums[mid] >= x)
        {
            ans = nums[mid];
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

void main()
{
    int nums[] ={3, 4, 4, 7, 8, 10};
    int n =sizeof(nums)/sizeof(nums[0]);
    int f = floor(nums, n , 5);
    int c = ceil(nums , n, 5);
    printf("%d is the floor and %d is ceil of 5",f,c);
}
