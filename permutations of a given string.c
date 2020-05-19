#include<stdio.h>
#include<string.h>
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
int main()
{
    char string[20]="abcd";
    int len=strlen(string);
    permutation_word(string, 0 ,len-1);
}
