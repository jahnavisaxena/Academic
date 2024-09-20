/*•	Store ‘n’ numbers (integers or real) in an array. Conduct a linear search for a given number 
and report success or failure in the form of a suitable message.*/
#include<stdio.h>
void main()
{
    int nums[] = {1,2,3,4,5,6};
    int n=6,flag = 0,i=0;
    int target = 4;
    for(i=0;i<n;i++)
    {
        if(nums[i] == target)
        {
            flag = 1;
        }
    }

    if(flag)
    {
        printf("%d is found in the array",target);
    }
    else{
        printf("%d was not found int the array",target);
    }
}
