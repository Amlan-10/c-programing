#include<stdio.h>
struct Books{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};
int main()
{
int n,i;

printf("Enter the number of books:");
scanf("%d",&n);
struct Books details[n];
for(i=0;i<n;i++){
printf("Enter the details of book %d\n",i+1);
printf("Enter the title of book\n");
scanf("%s",&details[i].title);
printf("Enter the author of book\n");
scanf("%s",&details[i].author);
printf("Enter the subject of book\n");
scanf("%s",&details[i].subject);
printf("Enter the book_id:\n");
scanf("%d",&details[i].book_id);
}
printf("The details of the books are :\n ");
for(i=0;i<n;i++){
    printf("Book %d",i+1);
    printf("Title of the book:%s\n",details[i].title);
    printf("Author of the book:%s\n",details[i].author);
    printf("Subject of the book:%s\n",details[i].subject);
    printf("Subject of the book:%d\n",details[i].book_id);
}
return 0;
}