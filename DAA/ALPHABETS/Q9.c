#include<stdio.h>
void ninthPattern(int n)
{
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            ch = ch + j;
            printf("%c ",ch-1);
            ch = 'A';
        }
        printf("\n");
    }
}
void main()
{
    ninthPattern(5);
}