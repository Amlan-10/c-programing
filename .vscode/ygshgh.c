#include<stdio.h>
int main()
{
//char *ptr= "Amlan";
//printf("%s", ptr);
char a[] ={ 'A', 'M', 'L', 'A','N', '\0'};
char *ptr = a;   
while(*ptr!='\0')
{
    printf("%c",*ptr);
    ptr ++;
}
return 0;
}