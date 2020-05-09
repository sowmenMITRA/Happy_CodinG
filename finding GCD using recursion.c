#include<stdio.h>
int finding_gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a; //or return b
    else
    {
        while(a!=b)
        {
            if(a>b)
            {
                return(a-b,b);
            }
            else
            {
                return(a,b-a);
            }
        }
    }

}
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("\nThe gcd of %d and %d is : %d\n",a,b,finding_gcd(a,b));
    return 0 ;
}
