//•	Write a program to reverse an array.
#include<stdio.h>
void reverseArray(int nums[],int n)
{
    for(int i = n-1 ;i>=0;i--)
    {
        printf("%d ",nums[i]);
    }
}

void main()
{
    int nums[5];
    int n=5;
    printf("Enter elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        
        scanf("%d",&nums[i]);
    }
    printf("Reversed array: \n");
    reverseArray(nums,n);
}
