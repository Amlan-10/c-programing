#include<stdio.h>
int main()
{
int n;
int max=0;
int nums[n];
int min=nums[0];
printf("Enter the number the elements in  the array : ");
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&nums[i]);
if(nums[i]>max){
    max=nums[i];
}
if(nums[i]<min){
    min=nums[i];
}
}
printf("The maximum number is: %d\n",max);
printf("The minimum number is: %d\n",min);
return 0;
}