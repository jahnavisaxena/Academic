#include<stdio.h>
void sixthPattern(int n)
{
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            ch = ch +j; 
            printf("%c",ch-1);
            ch = 'A';
            
        }
        printf("\n");                                  
    }
}
void main()
{
    sixthPattern(5);
}