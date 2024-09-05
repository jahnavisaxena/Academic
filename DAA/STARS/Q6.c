#include<stdio.h>

void diamond(int n)
{
    //first half
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int j=1;j<= 2*i-1;j++){
            printf("*");
        }
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        printf("\n");
    }
    //second half
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int j=1;j<= 2*i-1;j++){
            printf("*");
        }
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        printf("\n");
    }
}
void main()
{
    diamond(4);
}