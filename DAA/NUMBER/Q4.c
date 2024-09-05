#include<stdio.h>
void fourthPattern(int n)
{
    //first falf
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<= (n-i) ;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    //second half
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<= (n-i) ;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
void main()
{
    fourthPattern(5);
}