#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", year);
    leap(year);
    return 0;
}
int leap()
{
    int year,d;

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