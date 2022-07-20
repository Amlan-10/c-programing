#include <stdio.h>
#include<stdlib.h>

struct people
{
    char name[10];
    int age;
    char gender;
    int contact_number[10];
};

    int main()
{
   
    int n,i;
    printf("The number of student is:\n");
    scanf("%d",&n);
    struct people details[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the people:");
        scanf("%s",&details[i].name);
        printf("Enter the age of the people:");
        scanf("%d",&details[i].age);
        printf("Enter the gender of the people:");
        scanf("%s",&details[i].gender);
        printf("Enter the conatct number of the people:");
        scanf("%d",&details[i].contact_number);
        
    }
    printf("The details of the people are:\n");
    for(i=0;i<n;i++)
    {
        if(details[i].age>18)
        {
        printf("The name of the people is: %s\n",details[i].name);
        printf("The age of the people is: %d\n",details[i].age);
        printf("The gender of the people is: %c \n",details[i].gender);
        printf("The conatct number of the people is: %d\n",details[i].contact_number);
        }
        
    }
    return 0;
}