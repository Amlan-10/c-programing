#include<stdio.h>
struct employee
{
    int id,age,salary,gross;
    char name[25];
}emp[100];

 main()
{
    int i,n;
    
    
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as id , name , age , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d",&emp[i].id,emp[i].name,&emp[i].age,&emp[i].salary);
        emp[i].gross=(0.8*emp[i].salary)+(0.1*emp[i].salary)+(emp[i].salary);
    }
    printf("\nEMP_ID\tEMP_NAME\tEMP_AGE\t\tEMP_SAL\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\n",emp[i].id,emp[i].name,emp[i].age,emp[i].gross);
    }
    return 0;
}