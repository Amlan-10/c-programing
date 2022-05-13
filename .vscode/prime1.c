#include<stdio.h>
int main()
{
int t,c,num,prime=1;
printf("Enter the number\n");
scanf("%d", &num);
t=num/2;
for(c=2;c<=t;c++)
{
    if (num%c==0)
    {
        prime=0;break;
    }
}
if(prime==1)
{
    printf("Prime number\n");
}
else{
    printf("Not a Prime number\n");
}
return 0;
}