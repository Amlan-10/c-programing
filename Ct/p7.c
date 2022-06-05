#include<stdio.h>
int main()
{
float gs,bs,da,hraa;
printf("Enter the basic Salary :");
scanf("%f",&bs);
if(bs<1500)
gs=bs+bs*10/100+bs*40/100;
else
gs=bs+500*50/100;
printf("Gross Salary= Rs.%f",gs);

}