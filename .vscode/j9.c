#include<stdio.h>
int main()
{
char y[4] = {6, 7, 8, 9};
int *ptr = y + 4;
printf("%d", ptr[-1] ); //*(ptr-1) == ptr[-1]
return 0;
}