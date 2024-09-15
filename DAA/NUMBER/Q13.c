#include<stdio.h>
void thirteenthPattern(int n)
{
    int count =1;
    for(int i=1;i<=n;i++)
    {
        
            if(i % 2 != 0)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%d ",count);
                    count = count + 1;
                }
            }
            else
            {
                int num = count;//upar increament hoke value
                for(int j = count + i -1;j>=num;j--)
                {
                    printf("%d ",j);
                    ++count;
                }
                
                
            }
            printf("\n");
        
    }
}
void main()
{
    thirteenthPattern(6);
}
