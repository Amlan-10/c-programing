#include<stdio.h>

char *myFunc (char *ptr)
{
ptr += 2;
return (ptr);
}
int main()
{
char *x, *y;
x = "MADAM ";
y = myFunc (x+1);
printf ("y = %s \n", y);
return 0;
}
