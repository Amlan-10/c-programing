#include<stdio.h>
int main()
{
int n,sum = 0;
printf("Enter the number\n");
scanf("%d", &n);
// while(i<=n){            
//     if(n%2==0)     
//     {
//         sum =sum+i;
//     }i=i+2;
// } 
for(int i=2;i<=n;i=i+2)
{
    if(i%2==0){
        sum = sum + i;
    }
}
printf("The sum of first %d even numbers is %d",n, sum);
return 0;
}