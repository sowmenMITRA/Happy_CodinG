#include<stdio.h>
#include<string.h>
void change_position(char *chr_1,char *chr_2);
void permutation_word(char *string,int start_no,int end_no);
int main()
{
    char string[20];
    printf("Enter string which you want to get permutation : ");
    gets(string);
    int len=strlen(string);
    printf("After Permutation : \n");
    permutation_word(string, 0 ,len-1);
    return 0 ; 
}
void change_position(char *chr_1,char *chr_2)
{
    char temp;;
    temp=*chr_1;
    *chr_1=*chr_2;
    *chr_2=temp;
}
void permutation_word(char *string,int start_no,int end_no)
{
    if(start_no==end_no)
    {
        printf("%s\n",string);
    }
    else
    {
        for(int loop=start_no;loop<=end_no;loop++){
            change_position(string+loop,string+start_no);
            permutation_word(string,start_no+1,end_no);
            change_position(string+loop,string+start_no);
        }
    }
}
