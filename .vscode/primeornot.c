#include <stdio.h>
int main()
{
    int count = 0;
    int num;
    int c;
    printf("Enter the number to be checked\n");
    scanf("%d", &num);
    for(c=1;c<=num;c++)
    {
        if (num % c == 0)
        {
           count++;
        }
    }
    if (count==2)
    {
        printf(" Prime number\n");
    }
    else
    {
        printf("Not a Prime number\n");
    }
    return 0;
}
