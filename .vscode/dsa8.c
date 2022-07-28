#include<stdio.h>
int binarySearch(int[],int,int,int);
int main()
{
int n;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Enter the number to be searched:\n");
int key;
scanf("%d",&key);
printf("The key is in index: %d",binarySearch(a,key,0,n-1));
return 0;
}
int binarySearch(int a[],int key,int l,int r){
if(l>r)
{
return -1;}
int mid=l+(r-l)/2;
if(a[mid]==key){
return mid;}
if(a[mid]<key){
return binarySearch(a,key,mid+1,r);}
else{
return binarySearch(a,key,l,mid-1);}
}