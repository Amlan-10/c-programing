#include <stdio.h>
#include <stdlib.h>

int getCount(float *arr, int n, float num1, float num2)
{
    int i = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == num1)
            break;

    if (i >= n - 1)
        return 0;

    int j;
    for (j = n - 1; j >= i + 1; j--)
        if (arr[j] == num2)
        break;

    if (j == i)
        return 0;

    return (j - i - 1);
}

int main()
{
    int n;
    printf("\nEnter the number of elements  : ");
    scanf("%d", &n);

    float *a, n1, n2;
    a = malloc(n * sizeof(a));
    if (a == NULL)
    {
        printf("\nMemory not allocated.\n\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the elements of array   : \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%f", &a[i]);
        }
        printf("Enter the lower and upper limit number: ");
        scanf("%f %f", &n1, &n2);
        printf("The number of elements between %g and %g (both inclusive) : %d ", n1, n2, getCount(a, n, n1, n2)+2);
    }
    return 0;
}