#include <stdio.h>
int main()
{
    int year, d;
    printf("Enter the year to be checked\n");
    scanf("%d", &year);
    d = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    if (d == 1)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a Leap year");
    }
    return 0;
}