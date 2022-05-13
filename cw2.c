#include<stdio.h>
int main()
{
    int a,b,c,d,max;
    printf("Enter the values of a,b,c,d\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    printf("The max of four numbers is: %d",max);
    return 0;
}