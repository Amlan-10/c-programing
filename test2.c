#include<stdio.h>//pattern
int main()
{
int n,u=1,v=1;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=1;j<=n-i-1;j++){
        printf(" ");
    }for(int k=1;k<=i+1;k++){
        if(i%2==0){
            printf("%d ",u);
            u++;
        }
        else{
            printf("%c ",64+v );
v++;
        }
    }printf("\n");
}
return 0;
}