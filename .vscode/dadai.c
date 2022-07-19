#include<stdio.h>
int main()
{
int a=123,b=0,c=0,x,z=0;
x=a%10;
b=a/100;
c=(a%100)/10;
z=(x*100)+(c*10)+b;
printf("%d",z);
return 0;
}