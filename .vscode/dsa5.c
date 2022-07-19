#include<stdio.h>
#include<stdlib.h> //realloc 
int main()
{
int *ptr;
int n;
printf("Enter the value of n :");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
    printf("The number at index %d is %d\n",i,ptr[i]);
}
printf("Enter the new value of n :");
scanf("%d",&n);
ptr=(int*)realloc(ptr,n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
    printf("The number at index %d is %d\n",i,ptr[i]);
}
return 0;
}
