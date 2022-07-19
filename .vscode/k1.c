#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a and b\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", a);
    }
    return 0;
}