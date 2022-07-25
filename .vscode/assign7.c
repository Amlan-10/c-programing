/*Let A be nXn square matrix array. WAP by using appropriate user defined
functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements. */
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
int zerocount(int**,int,int);
int sum_leading_diagonal(int**,int,int);
void display_below_diagonal(int**,int,int);
int mul_diagonal(int**,int,int);
int main() 
{ 
    int **pi,row,col,zero,sum,mul; 
    printf("Enter the row of the matrix :");
    scanf("%d",&row);
    printf("Enter the column of the matrix :");
    scanf("%d",&col);
    pi = (int **)malloc(row*sizeof(int));
    for(int i=0; i<row; i++)
    {
        pi[i] = (int *)malloc(col*sizeof(int));
    }
    printf("\nEnter the elements (%d) of the matrix :",row*col);
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&pi[i][j]);
        }
    }
    zero=zerocount(pi,row,col);
    sum=sum_leading_diagonal(pi,row,col);
    printf("\nnumber of non-zero elements : %d ",zero);
    printf("\nsum of above leading diagonal : %d \n",sum); 
    display_below_diagonal(pi,row,col);
    mul=mul_diagonal(pi,row,col);
    printf("\nthe product of the diagonal : %d",mul);
}
int zerocount(int**mat,int row,int col)
{
    int count=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(mat[i][j]!=0) 
            count++;
        }
    }
    return count;
}
int sum_leading_diagonal(int**mat,int row,int col)
{
    int sum=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i<j)
            {
                sum+=mat[i][j];
            }
        }
    }
    return sum;
}
void display_below_diagonal(int**mat,int row,int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i>j)
            {
                printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }
}
int mul_diagonal(int**mat,int row,int col)
{
    int mul=1;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i>j)
            {
                mul*=mat[i][j];
            }
        }
    }
    return mul;
}