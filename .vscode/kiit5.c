#include<stdio.h>
int main()
{
    int a,b;int c=0;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
a = a+b;
b = a-b;
a = a-b;
printf("The swapped value of a is %d\n",a);
printf("The swapped value of b is %d\n",b);
return 0;
}