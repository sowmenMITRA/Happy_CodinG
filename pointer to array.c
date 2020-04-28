#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr=arr;
    for(int loop=0; loop<5; loop++)
    {
        printf("Enter Element [%d] : ",loop+1);
        scanf("%d",ptr+loop);
    }
    for(int loop=0; loop<5; loop++)
    {
        printf("Value of [%d] element is %d and Address is %p.\n",loop+1,*ptr,ptr);
        ptr++;
    }
    return 0 ;
}
