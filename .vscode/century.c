#include <stdio.h>
int main()
{
    int score, count = 0, i = 1;
century:
    printf("Enter the score of player no. %d\n", i);
    scanf("%d", &score);
    if (score < 0)
    {
        goto century;
    }
    i++;
    if (score >= 100)
    {
        count = count + 1;
    }
    if (i <= 11)
    {
        goto century;
    }
    printf("No. of centuries scores is : %d", count);
    return 0;
}