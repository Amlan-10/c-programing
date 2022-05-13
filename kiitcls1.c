#include<stdio.h>
#define g 9.8
int main()
{
int u,t;
float v,s;
printf("Enter the initial velocity\n");
scanf("%d", &u);

for(t=1;t<=5;t++)
{
    v = (u + (g*t));
    s = (u*t)+(0.5)*(g*t*t);
    printf("The final velocity is %f and distance is %f after %d sec \n", v, s, t);
}

return 0;
}