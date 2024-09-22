#include<stdio.h>
void threelargest(int nums[],int n)
{
    int first = nums[0], second = nums[0], third = nums[0];

    
    for (int i = 0; i < n; i++) {
        if (nums[i] > first) {
            third = second;
            second = first;
            first = nums[i];
        } else if (nums[i] > second && nums[i] != first) {
            third = second;
            second = nums[i];
        } else if (nums[i] > third && nums[i] != first && nums[i] != second) {
            third = nums[i];
        }
    }
    printf("Three largest numbers are: %d , %d and %d ",first,second,third);
}
void main()
{
    int nums[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(nums)/sizeof(nums[0]);
    threelargest(nums,n);
}
