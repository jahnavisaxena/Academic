#include<stdio.h>

void rhombus(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
       printf("\n"); 
    }
    
}
void main(){
    rhombus(5);
}