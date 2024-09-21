/*12.	Write a program to count the total number of nonzero elements in a two-dimensional array.*/
#include<stdio.h>
int countNonZeroes(int nums[][3],int n,int m)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(nums[i][j] != 0)
            {
                count++;
            }
        }
    }
    return count;
}
void main()
{
    int n=3,m=3;
    int nums[3][3]= {{1,2,4},{4,0,3},{8,0,0}};
    printf("Number of non-zero is : %d",countNonZeroes(nums,n,m));
}
