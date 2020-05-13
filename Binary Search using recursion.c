#include<stdio.h>
void binary_search(int *array,int search,int max)
{
      static loop=0;
      if(loop<max)
      {
          if(search==array[loop])
          {
              printf("The number is in the array.");
          }
          else
          {
              loop=loop+1;
              binary_search(array,search,max);
          }
      }
      else
        printf("The number is not in the array.");
}
int main()
{
      int arr[100],max,search;
      printf("Enter element number is the array : ");
      scanf("%d",&max);
      for(int loop=0;loop<max;loop++){
        printf("Enter %d element of the array : ",loop+1);
        scanf("%d",&arr[loop]);
      }
      printf("Enter number you want to search : ");
      scanf("%d",&search);
      binary_search(arr,search,max);
      return 0 ;
}
