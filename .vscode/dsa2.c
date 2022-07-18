#include<stdio.h>
void swap(int *x,int *y);
void swapped(int,int);
int main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("the initial value of a and b is %d and %d respectively\n",a,b);
// swap(&a,&b);
swapped(a,b);
// printf("The swapped value of a and b is %d and %d respectively\n",a,b);
return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void swapped(int p,int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    printf("The swapped value of a and b is %d and %d respectively\n",p,q);
}