#include <stdio.h>
int main()
{
    int n, i, count = 0, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter the Numbers\n");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            count++;
            sum = sum + n;
        }
    }
    printf("The sum of the %d odd numbers is : %d", count, sum);
    return 0;
}