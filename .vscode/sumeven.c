#include<stdio.h>
int main()
{int i=2;
int n;int sum=0;
printf("Enter the number\n");
scanf("%d", &n);
while(i<=n)
{
    sum = sum + i;
    i=i+2;
    }
    printf("The sum of first %d even numbers is %d",n, sum);
return 0;
}