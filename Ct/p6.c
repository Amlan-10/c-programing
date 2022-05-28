#include<stdio.h>
#include<conio.h>
#define Pi 3.14
void main()
{
float r,area;
printf("Enter the area of the circle:");
scanf("%f",&r);
area=Pi*(r*r);
printf("The area of the circle is : %.2f",area);
}