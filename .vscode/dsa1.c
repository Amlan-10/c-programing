#include <stdio.h>    
int main() 
{ 
    int count =100;
    int *p = &count;
    int num;
    int sum;
    int rem;
      
    while(*p <= 1000)  
    {  
        num = *p;  
        sum = 0;  
        while(num)  
        {  
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            printf("%d is a Armstrong number\n", count);  
        }  
  
        count++;  
    }  
     return 0;  
}