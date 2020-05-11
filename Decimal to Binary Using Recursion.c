#include<stdio.h>
void fun(int n,int loop)
{
     int arr[100],rem;
     if(n!=0)
     {
         rem=n%2;
         arr[loop]=rem;
         fun(n/2,loop++);
         printf("%d",arr[loop-1]);
         loop--;
     }
}
int main()
{
     int n;
     printf("Enter Decimal Number : ");
     scanf("%d",&n);
     printf("The Binary number is : ");
     fun(n,0);
}
