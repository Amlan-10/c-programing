#include<stdio.h>
int search(int a[],int key);
int main()
{
int n;
printf("Enter the size of the array:");
scanf("%d",&n);
int a[n];
int key;
printf("Enter the element to be searched:\n");
scanf("%d",&key);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("The value is at index: %d",search(a,key));
return 0;
}
int search(int a[],int key){
    int l=0;int r=sizeof(a)-1;
while(l<=r){
   int mid=l+(r-l)/2;
   if(a[mid]==key){
    return mid;
   }
   if(a[mid]<key){
    l=mid+1;
   }
   else{
    r=mid-1;
   }
}
return -1;
}