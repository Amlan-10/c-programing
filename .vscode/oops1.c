#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int rollnum;
    int maths;
    int phy;
    int chem;
    int bio;
    int eng
};

int main()
{
    
    int n,i;
    struct student details;
 
        printf("Enter the name of the students:");
        scanf("%s",&details.name);
        printf("Enter the roll number of the students:");
        scanf("%d",&details.rollnum);
        // for(i=0;i<5;i++){
            printf("Enter the marks of Maths : ");
            scanf("%d",&details.maths);
            printf("Enter the marks of Chemistry : ");
            scanf("%d",&details.chem);
            printf("Enter the marks of Biology : ");
            scanf("%d",&details.bio);
            printf("Enter the marks of English: ");
            scanf("%d",&details.eng);
    // }
    printf("Displaying information:\n");
        printf("Name : %s\n",details.name);
        printf("Roll Number : %d\n",details.rollnum);
        printf("Maths Marks : %d\n",details.maths);
        printf("Chemistry Marks : %d\n",details.chem);
        printf("Biology Marks : %d\n",details.bio);
        printf("English Marks : %d\n",details.eng);
return 0;
}