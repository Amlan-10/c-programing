#include<stdio.h>
int main()
{
int a,b,c=0,d,rev=0;
printf("Enter the number to be reversed\n");
scanf("%d",&a);
b = a / 100;
c = (a % 100)/10;
d = (a % 10);
rev = (d*100)+(c*10)+b;
printf("The reverese number is %d",rev);
return 0;
}