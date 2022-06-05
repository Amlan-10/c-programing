#include <stdio.h>
int fibonacci(int x);
int main()
{
    int m,n,sum=0;
    printf("Enter the value of m and n \n");
    scanf("%d %d", &m,&n);
    for(int i=m;i<=n;i++){
    printf("The fibonacci nums btw %d and %d is %d", m,n,fibonacci(i));
    // sum=sum+fibonacci(a);
    printf("The sum of fibo numbers is : %d",am_sum(sum,fibonacci(i)));
    return 0;
}}
int fibonacci(int x)
{
    int m,n;
while (x>=m && x<=n)
{
    if (x == 1 || x == 2)
    {
        return x-1;
    }
    else
    {
        return (fibonacci(x - 1) + fibonacci(x-2)) ;
    }}
    int am_sum(int a,int b,int sum){
        
         sum = a+b;
         return sum;
    }
}