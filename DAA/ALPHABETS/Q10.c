#include<stdio.h>
void tenthPattern(int n)
{
    char ch ='A';
      for(int i=n;i<=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            ch = ch + k;
            printf("%c ",ch-1);
            ch = 'A';
        }
        printf("\n");
    }
}
void main()
{
    tenthPattern(5);
}