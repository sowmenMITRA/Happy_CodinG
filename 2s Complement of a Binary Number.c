#include<stdio.h>
#define size 8
int main()
{
    char binary[size+1],ones_comp[size+1],twos_comp[size+1];
    int carry=1,loop;
    printf("Enter %d bit binary number\n",size);
    gets(binary);
    for(loop=0; loop<size; loop++)
    {
        if(binary[loop]=='0')
        {
            ones_comp[loop]='1';
        }
        else if(binary[loop]=='1')
        {
            ones_comp[loop]='0';
        }
    }
    ones_comp[size]='\0';
    for(loop=size-1; loop>=0; loop--)
    {
        if(ones_comp[loop]=='1' && carry==1)
        {
            twos_comp[loop]='0';
        }
        else if(ones_comp[loop]=='0' && carry==1)
        {
            twos_comp[loop]='1';
            carry=0;
        }
        else
        {
         twos_comp[loop]=ones_comp[loop];
        }
    }
    twos_comp[size]='\0';
    printf("You entered Binary number is %s\n",binary);
    printf("Ones complement : %s\n",ones_comp);
    printf("Twos complement : %s\n",twos_comp);
    return 0 ;
}
