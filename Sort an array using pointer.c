#include<stdio.h>
#define MAX 100
int main()
{
    int element,*ptr,temp,array[MAX];
    printf("Enter total element in the array : ");
    scanf("%d",&element);
    for(int loop=0;loop<element;loop++){
        printf("Enter element %d : ",loop+1);
        scanf("%d",&array[loop]);
    }
    ptr=array;
    for(int i=0;i<element;i++){
        for(int j=i+1;j<element;j++){
            if(*(ptr+i)>*(ptr+j)){
               temp=*(ptr+i);
               *(ptr+i)=*(ptr+j);
               *(ptr+j)=temp;
            }
        }
    }
    printf("After sorting : \n\n");
    for(int loop=0;loop<element;loop++){
        printf("Element %d : %d\n",loop+1,*(ptr+loop));
    }
    return 0 ;
}
