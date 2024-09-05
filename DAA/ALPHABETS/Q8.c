#include<stdio.h>
void eigthPattern(int n)
{
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }
}
void main()
{
    eigthPattern(5);
}