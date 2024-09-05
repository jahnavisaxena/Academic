#include<stdio.h>
void invertedHalfPyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<= (n-i+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return;
}
int main()
{
    invertedHalfPyramid(5);
    return 0;
}