#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*tail;
void creatlist(int n)
{
    struct node *new_node;
    head=0;
    for(int loop=1;loop<=n;loop++)
    {
    new_node=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of node %d : ",loop);
    scanf("%d",&new_node->data);
    if(head==0)
    {
        head=tail=new_node;
        new_node->prev=new_node;
        new_node->next=new_node;
    }
    else
    {
      tail->next=new_node;
      new_node->prev=tail;
      new_node->next=head;
      head->prev=new_node;
      tail=new_node;    
    }
    }
    
}
int main()
{
    int n;
    printf("Enter how many nodes you want to  create : ");
    scanf("%d",&n);
    creatlist(n);
    //checking is the double linked list created on not.
    printf("%d\n",tail->next->data);
    printf("%d\n",head->prev->data);
}
