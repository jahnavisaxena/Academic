#include<stdio.h>
void thirdPattern(int n)
{
    char ch = 'E';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}
void main()
{
    thirdPattern(5);
}