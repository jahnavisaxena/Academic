#include<stdio.h>
void secondPattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main()
{
    secondPattern(5);
    return 0;
}