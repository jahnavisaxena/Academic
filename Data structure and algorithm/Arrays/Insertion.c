#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n");
}
int insert(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)//size agar capacity se zyaada hoga toh nhi aa paega usme fit extra element isiliye -1 i.e. unseccessful
    {
        return -1;
    }
    for(int i=size-1;i>=index;i--)//size se kam jaata jab tk uss index pe na pohoch jaaye
    {
        arr[i+1]=arr[i];//array ko ek place zyaada push krdo
    }
    arr[index]=element;//uss index pe element place krdo
    return 1;
 }
void main()
{
    int arr[50]={4,2,1,56,43};
    int size=6;
    int element=9;
    int index=2;
    display(arr,size);
    insert(arr,size,element,50,index);//arr,size,element,capacity,index
    size+=1;
    display(arr,size);
}