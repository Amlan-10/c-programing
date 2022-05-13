#include<stdio.h>
void display3(int n,char ch)
{
int i;
for(i=0;i<n;i++)
    printf("%c",ch);
    printf("\n");
    return(0);
}
int main()
{
    int a=10,b=5;
    display3(20,5);
    display3('A',36);
    display3('5','Y');
    return 0;
}