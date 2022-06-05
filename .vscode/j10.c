#include<stdio.h>
int main()
{
int i = 5;
switch (i)
{
default:
;
case 3:
i += 2;
if ( i == 8)
break;
i = i - 4;
case 4:
i += 5;
}
printf("i = %d\n", i);
return 0;
}