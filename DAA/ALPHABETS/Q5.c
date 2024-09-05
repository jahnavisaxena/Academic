#include<stdio.h>
void fifthPattern(int n)
{
    char ch = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("%c ",ch);
            
            
        }
        ch++;
        printf("\n");
  
    }
}
void main()
{
    fifthPattern(5);
}