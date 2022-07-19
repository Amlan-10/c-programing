#include<stdio.h>
int main()
{
float r1,r2,r3,voltage,rs;
float is,t,rp,ip;
printf("Enter r1,r2 and r3\n");
scanf("%f %f %f", &r1, &r2, &r3);
printf("Enter the voltage\n");
scanf("%f", &voltage);
rs = (r1+r2+r3);
is = voltage/rs;
t = ((float)(1.0/r1)+(float)(1.0/r2)+(float)(1.0/r3));
rp = (1/t);
ip = (voltage/rp);
printf("The series resistance is : %0.2f\n The series current is : %0.2f \n The parallel resistance is : %0.2f \n The parallel current is : %0.2f",rs,is,rp,ip);
return 0;
}