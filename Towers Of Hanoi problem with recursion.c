#include<stdio.h>
void Tower(int n,char initial_position,char final_destination,char primary_position)
{
    if(n==1)
    {
       printf("Pass %d disk from %c to %c\n",n,initial_position,final_destination);
       return;
    }
    Tower(n-1,initial_position,primary_position,final_destination);
    printf("Pass %d disk from %c to %c\n",n,initial_position,final_destination);
    Tower(n-1,primary_position,final_destination,initial_position);
}
int main()
{
    int n;
    printf("Enter Number of Disk : ");
    scanf("%d",&n);
    Tower(n,'I','F','P'); // I=initial , F=Final ,P=primary
}
