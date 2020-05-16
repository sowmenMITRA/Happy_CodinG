#include<stdio.h>
#include<string.h>
int main()
{
    int temp;
    char array[100];
    printf("Enter text to sort : ");
    fgets(array,sizeof array,stdin);

    int len=strlen(array);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(array[i]>array[j])
            {
               temp=array[i];
               array[i]=array[j];
               array[j]=temp;
            }
        }
    }
    printf("After sorting the string appears like :");
    printf("%s\n\n",array);
    return 0 ;
}
