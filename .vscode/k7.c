#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number\n");
    scanf("%d", &a);
    b = a % 100;
    c = a / 100;
    if (b >= 50)
    {
        c++;
    }
    a = c * 100;
    printf("The final answer is : %d", a);
    return 0;
}