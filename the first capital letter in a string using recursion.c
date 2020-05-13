#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
int check_capital(char *check)
{
    static int loop=0;
    if(loop<strlen(check))
    {
        if(isupper(check[loop]))
           return check[loop];
        else
        {
            loop=loop+1;
            check_capital(check);
        }
    }
    else
        return 0 ;
}
int main()
{
    char string[max];
    printf("Type any word : ");
    gets(string);
    int result=check_capital(string);
    if(result==0)printf("There is no capital letter !");
    else
    {
        printf("The capital letter in the word \"%s\" comes first is %c",string,result);
    }
}
