#include <stdio.h>
int main()
{
    float a, b, c, d, h, i;
    printf("Enter the number\n");
    scanf("%f", &a);
    int k = a;
    b = (a - k);
    int t = b * 1000;
    d = t % 10;
    t = t / 10;
    c = t % 10;
    t = t / 10;
    i = t % 10;
    if (d >= 5)
    {
        c++;
    }
    h = (((i * 10) + c) / 100);
    printf("The answer is : %0.2f", h + k);
    return 0;
}