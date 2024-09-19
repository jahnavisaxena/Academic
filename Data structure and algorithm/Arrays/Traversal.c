#include<stdio.h>
void output(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
    printf("%d\n",arr[i]);
   }
}
void main()
{
    int arr[9];
    for(int i=0;i<5;i++)
    {
       printf("element %d : ",i);
       scanf("%d",&arr[i]);
    }

   output (arr,5);
}