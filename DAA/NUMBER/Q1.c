#include<stdio.h>
void firstPattern(int n)
{
    int counter = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",counter);
            counter++;
        }
        printf("\n");
    }
}
void main()
{
    firstPattern( 5);
}