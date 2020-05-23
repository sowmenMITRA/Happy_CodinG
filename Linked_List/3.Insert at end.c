#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data ;  // setting data
    struct node *next;  // setting address of next node
}*head;
void CreatNodeList(int n);
void PrintData();
void InsertBeginning(int data);

int main()
{
    int TotalNode,data;
    printf("Enter how many Nodes you want to create : ");
    scanf("%d",&TotalNode);

    CreatNodeList(TotalNode);    // calling function to create node items.
    printf("Node List created successfully\n\n");

    printf("Node Data's are\n");
    PrintData();

    printf("\nEnter the data you want to insert at the end of list : ");
    scanf("%d",&data);

    InsertEnd(data);

    printf("After inserting finally the Node list  : \n");
    PrintData(); //to print the final node list.
}

void CreatNodeList(int n)
{
    int data;
    struct node *new_node,*temp;

    /* creating Head note or starting node
    malloc will return void pointer so need to type cast.
    and putting the start address of that memory block to
    a pointer head */

    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
        printf("Enter Data of Node 1 : ");
        scanf("%d",&data);
        head->data=data;      //passing data to the head noad
        head->next=NULL;
        temp=head;      //setting address as null

        /*
        creating other n-1 nodes
        */

        for(int loop=2; loop<=n; loop++)
        {
            new_node=(struct node *)malloc(sizeof(struct node));
            if(new_node==0)
            {
                printf("Unable to allocate memory");
                break;
            }

            else
            {
                printf("Enter Data of Node %d : ",loop);
                scanf("%d",&data);
                new_node->data=data;
                new_node->next=NULL;

                temp->next=new_node;
                temp=temp->next;
            }
        }
    }
}

void PrintData()
{
    struct node *temp;
    int loop=1;
    temp=head; //we gonna traverse the temp where head is always fixed.
    if(temp==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("Node %d Data is : %d\n",loop++,temp->data);
            temp=temp->next;
        }
    }
}

void InsertEnd(int data)
{
    struct node *new_node,*temp;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;
    if(new_node==0)
    {
        printf("Unable to allocate memory at first");
    }
    else
    {
       temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=new_node;
    }
}
