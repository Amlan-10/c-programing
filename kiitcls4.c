#include<stdio.h>
int main()
{
int pt,st,pv,sv;
printf("Enter the Primary Voltage:\n");
scanf("%d", &pv);
printf("Enter the number of Primary Turns:\n");
scanf("%d", &pt);
printf("Enter the number of Secondary Turns:\n");
scanf("%d", &st);
sv = (pv*st)/pt;
printf("The Secondary Voltage is: %d", sv);
return 0;
}