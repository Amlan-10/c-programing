#include <stdio.h>
void sort(int a[]);
void swap(int a[], int i, int j);
int main()
{
    int n;
    int nums[n];
    // nums=(int*)malloc(n*sizeof(nums));
    printf("Enter the number the elements in  the array : ");
    scanf("%d", &n);
    printf("The sorted array is: %d",sort(nums));
    return 0;
}
void sort(int a[])
{
    int n = sizeof(a);
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(a, j + 1, j);
                k = 1;
            }
        }
        if (!k)
        {
            break;
        }
    }
}
void swap(int a[], int i, int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}