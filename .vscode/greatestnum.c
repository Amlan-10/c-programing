#include <stdio.h>
int main()
{
    int a = 5, b = 3, c = 6, d = 2;
    if (a > b && a > c && a > d)
    {
        printf("The Greatest number is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The Greatest number is %d", b);
    }
else if (c > a && c > b && c > d)
{
    printf("The Greatest number is %d", c);
}
else
{
    printf("The Greatest number is %d", d);
}
return 0;
}