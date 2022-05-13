#include<stdio.h> //(Display 4*5 matrix)

int main()
{
    int array1[10][10],i,j,m,n,sum = 0;
    printf("ENTER NO. OF ROWS: ");
        scanf("%d", &m);
        printf("\nENTER NO. OF COLUMNS: ");
        scanf("%d",&n);
        printf("\nENTER VALUES TO THE MATRIX: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nENTER a[%d][%d] VALUE: ",i,j);
                 scanf("%d", &array1[i][j]);
        }
    }
    printf("\nTHE MATRIX IS \n\n");
        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}