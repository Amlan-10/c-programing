#include<stdio.h>
int main()
{
float perimeter,radius;
printf("Enter the radius of the circle\n");
scanf("%f",&radius);
perimeter = ( 2 * 3.14 * radius);
printf("The perimeter of the circle is %0.2f",perimeter);
return 0;
}