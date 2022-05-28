#include<stdio.h>
#include<string.h>
int main()
{
char s1[10]="he",s2[20]="she",s3[30],s4[30];
printf("\t%s",strcpy(s3,s1));
printf("\t%s",strcat(strcpy(s4,s1),"or"));
return 0;

}
