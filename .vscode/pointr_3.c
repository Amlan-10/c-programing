#include<stdio.h>
int bump(int a);
int main()
{
    int i=4;
printf("The value of i is %d\n", i);
bump(i);
printf("The address of i is %d\n", &i);
return 0;
}

int bump(int a)
{
printf("The address of a is %d\n", &a);
}