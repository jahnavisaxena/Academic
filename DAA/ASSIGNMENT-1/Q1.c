//•	Find sum of all array elements using recursion.
#include<stdio.h>
int sumOfarray(int nums[],int n)
{
    int sum = 0;
    if(n==0)
    {
        return 0;
    }
    return nums[n - 1] + sumOfarray(nums, n - 1);
}

void main()
{
    int nums[]= {1,2,3,4,5};
    int n=5;
    printf("%d",sumOfarray(nums,n));
}
