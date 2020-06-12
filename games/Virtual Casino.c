#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void JudgementGame(int bet)
{
    char arr[3]= {'J','Q','K'};
    printf("shuffling . . . .\n");
    int x,y,temp;
    srand(time(0));
    for(int loop=0; loop<5; loop++)
    {
        x=rand()%3;
        y=rand()%3;
        temp=arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
    }
    int playerGuess;
    int cash=100;
    printf("Enter you choice of the position 1,2,3 : ");
    scanf("%d",&playerGuess);
    if(arr[playerGuess-1]=='Q')
    {
        cash=cash+bet*3;
        printf("You are right !!! Result is %c %c %c and cash is : %d\n",arr[0],arr[1],arr[2],cash);
    }
    else
    {
        cash=cash-bet*5;
        printf("You are wrong !!! Result is %c %c %c and cash is : %d\n",arr[0],arr[1],arr[2],cash);
    }
    printf("\n\n");
}
int main()
{
    int bet,cash=100;
    printf("----Virtual Casino----\n");
    printf("Total Initial cash is $%d\n",cash);
    while(cash>0)
        {
            printf("Whats you bet($) : ");
            scanf("%d",&bet);

            if(bet==0 || bet>cash)
            {
                break;
            }
            else
            {
                JudgementGame(bet);
            }
        }
}
