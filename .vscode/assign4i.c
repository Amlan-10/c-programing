#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr,n,i,j,pos,temp;
    printf("Enter the number of elements in the Array:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(arr));
    
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element in  %d position: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    printf("\nThe sorted array is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
  
}