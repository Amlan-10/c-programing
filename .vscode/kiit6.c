#include<stdio.h>
int main()
{
int a,kilometers,meters;
printf("Enter the distance in meters\n");
scanf("%d",&meters);
kilometers = (meters/1000);
a = (meters%1000);
printf("The distance is %dkm and %dm ",kilometers,a);
return 0;
}