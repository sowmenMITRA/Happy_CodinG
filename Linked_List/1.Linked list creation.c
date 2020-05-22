#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    int loop=1;
    struct node *head,*new_node,*temp;
    head=0;
    int result=1;
    while(result)
    {
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data for %d node : ",loop++);
        scanf("%d",&new_node->data);
        new_node->next=0;

        if(head==0)
        {
            head=temp=new_node;
        }
        else
        {
            temp->next=new_node;
            temp=new_node;
        }
        printf("Type 1 to create another Node or press 0 to exit\n");
        scanf("%d",&result);
    }
    printf("\n\n");
    loop=1;
    temp=head;
    while(temp!=0)
    {
        printf("Data value of node %d is %d\n",loop++,temp->data);
        temp=temp->next;
    }
    return 0 ;
}
