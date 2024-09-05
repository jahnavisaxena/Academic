#include<stdio.h>
void fourthPattern(int n)
{
    char ch='E';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}
void main()
{
    fourthPattern(5);
}