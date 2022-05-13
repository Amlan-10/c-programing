#include<stdio.h>
int main()
{
float c,f;
printf("Enter the temperature in Celsius\n");
scanf("%f",&c);
f = ((9*c)/5)+32;
printf("The temperature in celsius is %0.2f",f);
return 0;
}