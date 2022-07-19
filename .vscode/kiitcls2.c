#include<stdio.h>
int main()
{
int a,b,c,k;
printf("Give value of side A:");
scanf("%d", &a);
printf("Give value of side B:");
scanf("%d", &b);
printf("Give value of side C:");
scanf("%d", &c);
k = ((a+b)>c) && ((b+c)>a) && ((a+c)>b);
printf("Do they satisfy triangle property? 1 for Yes, 0 for No: %d", k);
return 0;
}