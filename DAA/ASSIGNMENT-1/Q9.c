//Move zeroes to end
#include<stdio.h>
void moveZeroes(int nums[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            int temp = nums[j];
            nums[j]=nums[i];
            nums[i] = temp;
            j++;
        }
    }
}

void main()
{
    int nums[] = {1, 4, 0, 4, 0, 7, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]); 
    
    printf("Array before moving zeroes: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    moveZeroes(nums, n);
    
    printf("\nArray after moving zeroes: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
}
