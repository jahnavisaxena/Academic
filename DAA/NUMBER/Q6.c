#include<stdio.h>
void sixthPattern(int n)
{
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<n-i+1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
     }
}
void main()
{
    sixthPattern(6);
}