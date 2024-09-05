#include<stdio.h>

void pyramid(int n)
{
    for(int i=1;i<=n;i++)
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
    pyramid(4);
}