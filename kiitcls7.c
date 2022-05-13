#include<stdio.h>
int main()
{
int m1,m2,t;
printf("Enter value of m1 and m2\n");
scanf("%d %d",&m1,&m2);
t=(m1==m2);
printf("Are they perpendicular? 1 for Yes, 0 for No: %d",t);
return 0;
}