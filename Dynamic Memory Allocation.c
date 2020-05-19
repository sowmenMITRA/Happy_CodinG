#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,element;
    printf("Enter how many element int the array : ");
    scanf("%d",&element);
    ptr=(int *)malloc(element*sizeof(int));
    if(ptr==NULL){
        printf("There is no memory allocted");
        exit(0);
    }
    for(int loop=0;loop<element;loop++){
        printf("Enter Element %d : ",loop+1);
        scanf("%d",ptr+loop);
    }
    for(int loop=1;loop<element;loop++){
        if(*ptr<*(ptr+loop)){
            *ptr=*(ptr+loop);
        }
    }
    printf("The Largest element is : %d\n\n",*ptr);
    return 0;
}
