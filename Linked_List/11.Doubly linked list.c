#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head,*last;
void displayListFromFirst()
{
    int loop=1;
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        printf("List is EMPTY");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("DATA of first-%d node = %d\n", loop++, temp->data);
            temp=temp->next;
        }
    }
}
void displayListFromEnd()
{
    struct node *temp;
    int loop=1;
    temp=last;
    if(last==NULL)
    {
        printf("No node in list");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("DATA of last-%d node = %d\n", loop++, temp->data);
            temp=temp->prev;
        }
    }
}
void createList(int n)
{
    struct node *new_node;
    head=(struct node *)malloc(sizeof(struct node));
    if(head!=NULL)
    {
        printf("Enter data of Node 1 : ");
        scanf("%d",&head->data);

        head->next=NULL;
        head->prev=NULL;
        last=head;
        for(int loop=2; loop<=n; loop++)
        {
            new_node=(struct node *)malloc(sizeof(struct node));
            if(new_node!=NULL)
            {
                printf("Enter data of Node %d : ",loop);
                scanf("%d",&new_node->data);
                new_node->prev=last;
                new_node->next=NULL;
                last->next=new_node;
                last=new_node;
            }
            else
            {
                printf("Unable to allocate memory");
            }
        }
    }
    printf("\n\n");
    printf("Already created Double linked list");
    printf("\n\n");
}

int main()
{
    int n,choice;
    printf("Enter the number of nodes you want to create : ");
    scanf("%d",&n);
    printf("\n\n");
    createList(n);
    printf("\n\n");
    printf("\nPress 1 to display list from First");
    printf("\nPress 2 to display list from End : ");
    scanf("%d", &choice);
    printf("\n\n");
    if(choice==1)
    {
        displayListFromFirst();
    }
    else if(choice==2)
    {
        displayListFromEnd();
    }
}
