#include<stdio.h>
int main()
{
int a;
float b;
long c;
printf("Enter the value of a\n");
scanf("%d", &a);
printf("Enter the value of b\n");
scanf("%f", &b);
printf("Enter the value of c\n");
scanf("%lld", &c);
printf("The value of a is = %d ", a);
printf("The value of b is = %0.3f ", b);
printf("The value of c is = %lld ", c);
return 0;
}