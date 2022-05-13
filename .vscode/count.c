#include <stdio.h>
 
int countDigits(int n)
{
    static int count=0;
    if(n>0)
    {
        count++;
        countDigits(n/10);
    }
    else
    {
        return count;
    }

    // return(n>0 ? (count+1),n/10 : count);
}
int main()
{
    int number;
    int count=0;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
     
    count=countDigits(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
     
    return 0;
}