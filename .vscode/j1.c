#include<stdio.h>
int main()
{
char *ptr;
char myString[] = "COMPUTER";
ptr = myString+1;
ptr --;
printf("%s",ptr);
return 0;
}