#include<stdio.h>
int main()
{
    char s[45];
printf("Enter your Name:\n");
gets(s);
puts(s);
printf("Your name is %s", s);
return 0;
}