#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int maths;
    int phy;
    int chem;
    int bio;
    int eng;
};
int main()
{
    struct student s[10];
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) 
    {   printf("Enter the details of student %d\n",i+1);
        printf("Enter the roll number of the student:");
        scanf("%d", &s[i].roll);
        printf("Enter the name of the student:");
        scanf(" %s", s[i].name);
        printf("Enter the marks in Maths:");
        scanf("%d", &s[i].maths);
        printf("Enter the marks in Physics:");
        scanf("%d",&s[i].phy);
        printf("Enter the marks in Biology:");
        scanf("%d",&s[i].bio);
        printf("Enter the marks in Chemistry:");
        scanf("%d",&s[i].chem);
        printf("Enter the marks in English:");
        scanf("%d",&s[i].eng);
        
    }
    printf("The details of the students are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n",i+1);
        printf("Roll:%d\n", s[i].roll);
        printf("Name:%s\n", s[i].name);
        printf("Maths:%d\n", s[i].maths);
        printf("Physics:%d\n", s[i].phy);
        printf("Chemistry:%d\n", s[i].chem);
        printf("Biology:%d\n", s[i].bio);
        printf("English:%d\n\t", s[i].eng);

    }
     return 0;
}
    

   