#include<stdio.h>
#include<math.h>
int power()
{
int a,b;
float x;
printf("Enter the first number\n");
scanf("%d",&a);
printf("Enter the second number\n");
scanf("%d",&b);
x = pow(a,b);
printf("The power is : %0.2f\n ", x);
return 0;
}
int main(){
    int a,b;
    power(a,b);
    return 0;
}