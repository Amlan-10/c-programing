#include <stdio.h>

int main()
{
    int i,j,m,n,sum=0,a[2][2];
    printf("Enter the rows for the matrix:");
    scanf("%d",&m);
    printf("Enter the coloumns for the matrix:");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    
    }
    if(m==n)
    {
        printf("It is a square matrix:");
    }
    else
    {
        printf("It is not a square matrix:");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==j) || (i+j%2!=0))
            {
                sum=sum+a[i][j];
            }
        
        }
    }
    printf("\nThe sum of the diagonal elements of the matrix is:%d",sum);

    return 0;
}