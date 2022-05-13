#include<stdio.h>
int main()
{
float t,u,s,g=9.8;
printf("Enter the initial velocity(u)\n");
scanf("%f", &u);
printf("Enter the time taken in seconds\n");
scanf("%f", &t);
s = (u*t)+(0.5)*(g*t*t);
printf("The distance = %0.2f", s);
return 0;
}