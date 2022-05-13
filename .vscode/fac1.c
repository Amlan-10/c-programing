#include<stdio.h>
int factorial(int n)
{
    return(n==1?1:n*factorial(n-1));
}
int main()
{
    int a,fact;
    printf("\nEnter any number\n");
    scanf("%d", &a);
    fact=factorial(a);
    printf("Factorial value = %d",fact);
    return 0;
}