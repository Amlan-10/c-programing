#include <stdio.h>
int main()
{
    float  x = 0.0;
    float f = 0.0;
    for(int c=30;c<=90;c=c+10){
    x = (c * 9) / 5;
    f = x + 32;
    printf("The temperature of %d Celsius in fahrenheit is %0.2f\n",c, f);
    }
    return 0;
}//printf("F: %f",f);