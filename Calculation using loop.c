#include<stdio.h>
int main()
{
    int n,right,answer,chance,count;
    for(int count=1; count<=10; count++)
    {
        printf("what is sum of %d and %d\n",count,count);
        scanf("%d",&answer);
        if(count+count==answer)
        {
            printf("Right");
        }
        else
        {
            printf("Sorry the answer is wrong\n");
            right=0;
            for(chance=0; chance<3&&!right; chance++)
            {
                printf("what is %d + %d\n",count,count);
                scanf("%d",&answer);
                if(answer==count+count)
                {
                    printf("Right");
                    right++;
                }
            }
            if(!right)
            {
                printf("The answer is %d",count+count);
            }
        }
        return 0 ;

    }
}
