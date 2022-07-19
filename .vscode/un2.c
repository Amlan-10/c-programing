#include<stdio.h>
int main()
{
struct book{
    char name[20];
    float price;
    int pages;
};
struct book b1,b2;
printf("\nEnter names,prices & no. of pages of 2 books :\n");
scanf("%s %f %d",b1.name,&b1.price,&b1.pages);
scanf("%s %f %d",b2.name,&b2.price,&b2.pages);
printf("The entered names are= %s%s,prices are=%f%f and no. of pages are=%d%d are : \n",b1.name,b2.name,b1.price,b2.price,b1.pages,b2.pages);
return 0;
}