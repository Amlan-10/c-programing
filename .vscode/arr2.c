#include<stdio.h>  //(Symmetric or not)
int main()  
{  
    int A[5][5], B[5][5];  
    int row, col, isSym;  
  
    printf("Enter the elements in matrix of size 5x5: \n");  
    for(row=0; row<5; row++)  
    {  
        for(col=0; col<5; col++)  
        {  
            scanf("%d", &A[row][col]);  
        }  
    }  
  
    for(row=0; row<5; row++)  
    {  
        for(col=0; col<5; col++)  
         {  
            B[row][col] = A[col][row];  
        }  
    }  
    
    isSym = 1;  
    for(row=0; row<5 && isSym; row++)  
    {  
        for(col=0; col<5; col++)  
        {    
            if(A[row][col] != B[row][col])  
            {  
                isSym = 0;  
                break;  
            }  
        }  
    }  
  
    if(isSym == 1)  
    {  
        printf("\n Matrix is Symmetric. \n");  
  
        for(row=0; row<5; row++)  
        {  
            for(col=0; col<5; col++)  
            {  
                printf("%d ", A[row][col]);  
            }  
  
            printf("\n");  
        }  
    }  
    else  
    {  
        printf("\n Matrix is not Symmetric.");  
    }  
  
    return 0;  
}