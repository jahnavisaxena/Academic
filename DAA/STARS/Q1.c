#include<stdio.h>
void halfPyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return;
}
int main()
{
    halfPyramid(5);
    return 0;
}