#include<stdio.h>
#include<string.h>
#define max 100
void fun(char string[],int index);
int main()
{
    char string[max];
    printf("Enter your word : ");
    gets(string);
    printf("\n");
    printf("Checking Palindrome or not!\n");
    printf("___________________________\n\n");
    fun(string,0);
    return 0 ; 
}
void fun(char string[],int index)
{
    int len=strlen(string)-(index+1);
    if(string[index]==string[len])
    {
        if(index+1==len || index==len)   ///for even and odd number.
        {
            printf("Entered number is Palindrome.\n\n\n\n");
            return;
        }
        fun(string,index+1);
    }
    else
    {
        printf("Entered number Not a Palindrome number.\n\n\n\n");
    }
}
