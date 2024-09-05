#include<stdio.h>

void hourglass(int n)
{
    for(int i=n;i>=1;i--)
    {
        //space
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //star
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        //space
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //star
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void main()
{
    hourglass(5);
}