#include<stdio.h>
int main()
{
float bs,gs;
printf("Enter the base salary\n");
scanf("%f",&bs);
if(bs<1500){
    gs=(bs*0.1)+(bs*0.4);
}
else{
gs=(500)+(bs*0.5);
}
printf("The Gross Salary is: %0.1f", gs);
return 0;
}