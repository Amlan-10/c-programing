#include <stdio.h>
int main()
{
    int n;
    int i=1, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of %d natural numbers is %d",n,sum);
    return 0;
}