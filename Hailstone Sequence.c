#include<stdio.h>
void hailstone(int N);
int getting_next_value(int N);
int check_total(int total);
int main()
{
    int N;
    printf("Enter from where you want to get Hailstone sequence : ");
    scanf("%d",&N);
    printf("\n");
    printf("The Hailstone Sequence starts from %d is : \n",N);
    hailstone(N);
    printf("\n\n");
    printf("Total Element in the sequence is : %d ",check_total(N));
    printf("\n");
    return 0 ;
}
void hailstone(int N)
{
    int n=N;
    if(n==1)
        printf("%d ",n);
    else
    {
        printf("%d ",n);
        hailstone(getting_next_value(n));
    }
}
int getting_next_value(int num)
{
    int number=num;
    if(number%2==0)
        number=number/2;
    else
       {
        number=number*3+1;
       }
    return number;
}
int check_total(int total)
{
    if(total==1)
        return 1;
    else
    {
        return 1+check_total(getting_next_value(total));
    }
}

