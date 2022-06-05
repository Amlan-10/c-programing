#include <stdio.h>

void mystate (int a,int b)
{
    int i;
    printf("The numbers between %d and %d are:",a,b);
    for(i=a;i<=b;i++)
    {
        if((i%3==0) || (i%9==0))
        {
            printf("%d\t",i);
        }
        
    }

}

int main()
{
    int a,b;
    printf("Enter the first range:");
    scanf("%d",&a);
    printf("Enter the second range:");
    scanf("%d",&b);
    mystate(a,b);
    
    return 0;
}