#include<stdio.h>
#define max 100
int fun(int array[],int n,int element)
{
    if(n>=element)
        return 0 ;
    else
    {
        printf("%d ",array[n]);
        return fun(array,n+1,element);
    }
}
int main()
{
    int array[max],n=0,element;
    printf("Enter element number : ");
    scanf("%d",&element);
    for(int loop=0; loop<element; loop++)
    {
        printf("Element - %d : ",loop);
        scanf("%d",&array[loop]);
    }
    printf("The array members are : ");
    fun(array,n,element);
    return 0 ;
}
