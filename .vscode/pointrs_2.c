#include<stdio.h>
int main()
{
int a = 4;
int *ptr;
ptr = &a;
printf("The value of a is %d\n", a);
printf("The value of a is %d\n", *ptr);
printf("The address of a is %u\n", ptr);//or %d
return 0;
}