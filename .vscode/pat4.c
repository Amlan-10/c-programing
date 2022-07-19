#include<stdio.h>
int main()
{
    int n=6,k=4;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i-1;j++){
        printf(" ");
    }
    for(int j=0;j<(2*i)-1;j++)
    {
        printf("%d", i);
    }
     for(int j=0;j<2*(n-i-1);j++){
        printf(" ");
    }
 for(int j=0;j<(2*i)-1;j++)
    {
        printf("%d", i);
    }
    printf("\n");
}
for(int i=k;i>0;i--){
    for(int j=0;j<(k-i)+1;j++){
        printf(" ");
    }
    for(int j=0;j<(2*i)-1;j++)
    {
        printf("%d",i);
    }
    for(int j=0;j<2*((k-i)+1);j++){
        printf(" ");
    } for(int j=0;j<(2*i)-1;j++)
    {
        printf("%d",i);
    }
printf("\n");
}
return 0;
}