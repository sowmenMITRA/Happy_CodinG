#include<stdio.h>
#define MAX 100
int maximum(int array[],int index,int lenght);
int main()
{
    int array[MAX],size;
    printf("Enter array size : ");
    scanf("%d",&size);
    printf("\n");
    for(int loop=0; loop<size; loop++)
    {
        printf("Enter %d element : ",loop+1);
        scanf("%d",&array[loop]);
    }
    int max=maximum(array,0,size);
    int min=minimum(array,0,size);
    printf("\n");
    printf("Maximum value of the array is : %d",max);
    printf("\n");
    printf("Minimum value of the array is : %d",min);
    printf("\n\n");
    return 0;
}
int maximum(int array[],int index,int lenght)
{
    int result;
    if(index>=lenght-2)
    {
        if(array[index]>array[index+1])
        {
            return array[index];
        }
        else
        {
            return array[index+1];
        }
    }
    result=maximum(array,index+1,lenght);

    if(array[index]>result)
        return array[index];
    else
        return result;

}
int minimum(int array[],int index,int lenght)
{
     int result;
     if(index>=lenght-2)
     {
         if(array[index]>array[index+1])
         {
             return array[index+1];
         }
         else
         {
             return array[index];
         }
     }
     result=minimum(array,index+1,lenght);

     if(array[index]>result)
        return result;
     else
        return array[index];
}

