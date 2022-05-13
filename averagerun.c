#include <stdio.h>
int main()
{
    int score, i = 1, total=0;
    float avg;
    match:
    printf("Enter the score of player no. %d\n", i);
    scanf("%d", &score);
    i++;
    if (score < 0)
    {
        goto match;
    }
    if (score >= 0)
    {

        total = total + score;
        avg = total / 11.0;
    }
    if (i <= 11)
    {
        goto match;
    }
    printf("The average of all the players is : %f", avg);
    return 0;
}