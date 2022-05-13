#include <stdio.h>

int main()
{
    int arr[6] = {5,9,8,3,0,1};           // &arr = 5 9  8 3 0 1
    int *b; 
    b = arr;
    for (int i=0;i<6;i++)
    {
        printf("%d, ",b[i]);
    }
    return 0;
}