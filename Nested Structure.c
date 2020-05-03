#include<stdio.h>
#include<string.h>
struct dob
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[30];
    int age;
    struct dob details;
};
int main()
{
    struct student s1={"Sowmen Mitra",24,2,9,1996};
    printf("Name : %s \n",s1.name);
    printf("Age : %d \n",s1.age);
    printf("Date Of Birth : %d : %d : %d ",s1.details.day,s1.details.month,s1.details.year);
    return 0 ;
}
