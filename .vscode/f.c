#include<stdio.h>
int main()
{
char p[]="SHYAM DHAM";
char *k=p+3;
printf("%c",++*k);
return 0;
}