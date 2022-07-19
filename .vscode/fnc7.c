#include<stdio.h>
int math()
{
int a,sum=0;
float avg;
for(int i=0;i<5;i++)
{
printf("Enter the numbers \n");
scanf("%d", &a);
sum = sum + a;
avg = sum/5.0;
}
printf("The sum is : %d and the average is : %f",sum,avg);
return 0;
}
int main()
{
    int n;
    math(n);
    return 0;
}