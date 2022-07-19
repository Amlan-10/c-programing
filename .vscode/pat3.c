#include <stdio.h>
int main()
{
    int n = 5, k = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 4) + (2 * i); j++)
        {
            printf("$");
        }
        for (int j = 0; j < (n + 3) - (2 * i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n - 4) + (2 * i); j++)
        {
            printf("$");
        }
        for (int j = 0; j < (n + 3) - (2 * i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n - 4) + (2 * i); j++)
        {
            printf("$");
        }
        printf("\n");
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < (k + 3) - (2 * i); j++)
        {
            printf("$");
        }
        for (int j = 0; j < (k - 2) + (2 * i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (k + 3) - (2 * i); j++)
        {
            printf("$");
        }
        for (int j = 0; j < (k - 2) + (2 * i); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (k + 3) - (2 * i); j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}