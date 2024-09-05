#include<stdio.h>
void firstPattern(int n)
{
    char ch = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
void main()
{
    firstPattern(5);
}