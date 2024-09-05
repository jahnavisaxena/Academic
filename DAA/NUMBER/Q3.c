#include<stdio.h>
void thirdPattern(int n)
{
    for(int i=1;i<=n;i++)
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
    thirdPattern(5);
}