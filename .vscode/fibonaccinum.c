#include <stdio.h>
int fibonacci(int x);
int main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("The fibonacci of %d is %d", a, fibonacci(a));
    return 0;
}
int fibonacci(int x)
{

    if (x == 1 || x == 2)
    {
        return x-1;
    }
    else
    {
        return (fibonacci(x - 1) + fibonacci(x-2)) ;
    }
}