#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c=5,i,r,sum=0,j,(*ptr)[c],sum2=0;
    printf("ENTER NO. OF ROWS: ");
    scanf("%d",&r);
    ptr=(int (*)[c])malloc(r*c*sizeof(int));
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    printf("ENTER THE ELEMENTS AT ROW %d AND COLUMN %d: ",i,j);
    scanf("%d",&ptr[i][j]);
    sum+=ptr[i][j];
    if(j==c-1){
    sum2+=ptr[i][j];
    }
    }
    }
    printf("SUM OF ALL ELEMENTS IS %d.",sum);
    printf("\nSUM OF ELEMENTS OF LAST COLUMN IS %d.",sum2);
    return 0;
}