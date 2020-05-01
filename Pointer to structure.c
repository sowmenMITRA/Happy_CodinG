#include<stdio.h>
#include<stdlib.h>
///Pointer to structure in C
struct student{
    char arr[100];
    int roll;
    int age;
};
int main()
{
   struct student *ptr;
   ptr=(struct student *)malloc(sizeof(struct student));
   printf("Name : ");
   scanf("%[^\n]",&ptr->arr);
   printf("Roll : ");
   scanf("%d",&ptr->roll);
   printf("Age : ");-
   scanf("%d",&ptr->age);
   printf("\nYour Informations : ");
   printf("\n");
   printf("Name : %s && Roll : %d && Age : %d\n",ptr->arr,ptr->roll,ptr->age);
   free(ptr);
   return 0 ;
}
