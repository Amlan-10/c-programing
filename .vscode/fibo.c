#include <stdio.h>

int fibonacci(int n)
{

    return (n==1 || n==2 ? 1:fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    int a,fib;
    printf("\n Enter the number : ");
    scanf("%d",&a);
    fib = fibonacci(a);
    printf(" Fibonacci number is : %d",fib);
    return(0);
}
