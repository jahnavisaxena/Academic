#include<stdio.h>
void seventhPattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2 == 0)
            printf("1 ");
            
            else{
                printf("0 ");
            }

        }
        printf("\n");
    }
}
void main()
{
    seventhPattern(5);
}