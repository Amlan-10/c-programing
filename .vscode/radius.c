#include<stdio.h>
int main()
{
    float pi=3.14;
    int radius;
    float areaofcircle;
    printf("Enter the radius\n");
    scanf("%d", &radius);
areaofcircle=(pi* radius*radius);
printf("The area of the circle is %0.2f", areaofcircle);
return 0;
}