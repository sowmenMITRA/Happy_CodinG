#include <stdio.h>
#include <stdlib.h>
int main()
{
  int array,n;
  printf("Element_Number of the array:\n");
  scanf("%d",&n);

  int *ptr=(int *)malloc(n*sizeof(int));
  for(int loop=0;loop<n;loop++)
  {
   printf("Enter element [%d] : ",loop+1);
   scanf("%d",ptr+loop);
  }
  for(int loop=0;loop<n;loop++)
  {
   printf("Value [%d] element : %d\n",loop+1,*ptr);
   ptr++;
  }
  return 0 ;
}
