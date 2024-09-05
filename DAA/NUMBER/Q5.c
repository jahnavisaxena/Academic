#include<stdio.h>
void fifthPattern(int n)
{
    for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i== 1||i==n || j == 1 || j == n)
        {
            printf("* ");
        }
        else{
            printf("%d ",j);
        }
        
    }
    printf("\n");
 }
}
void main()
{
    fifthPattern(5);
}