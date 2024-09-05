#include<stdio.h>
void tenthPattern(int n)
{
    int counter = 2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",counter);
            counter += 2;
        }
        printf("\n");
    }
}
void main()
{
    tenthPattern(5);
}