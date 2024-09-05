#include<stdio.h>
void secondPattern(int n)
{
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",ch);

        }
        ch++;
        printf("\n");
    }
}
void main()
{
    secondPattern(5);
}