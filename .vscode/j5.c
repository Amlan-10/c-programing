#include<stdio.h>
int main()
{
char x[] = { 11, 14, 88, 55, 21, 44 };
char *ptr, y;
ptr = x + 4;
y = ptr - x;
printf("%d",y);
return 0;
}