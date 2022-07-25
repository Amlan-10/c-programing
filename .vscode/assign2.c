#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("\nEnter the number of elements  : ");
    scanf("%d", &n);

    ptr =(int*)malloc(n * sizeof(int));
    if (!ptr)
    {
        printf("\nMemory not allocated.\n\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the elements of array   : \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        printf("Reverse content of the array : ");
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }
    free(ptr);
}