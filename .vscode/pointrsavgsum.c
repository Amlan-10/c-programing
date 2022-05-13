#include<stdio.h>
void avgsum(int a,int b, int *sum,float *avg);
int main()
{
    int i,j,sum;
    float avg;
i=3;
j=3;
avgsum(i, j ,&sum, &avg);
printf("The Value of sum is %d\n", sum);
printf("The Value of average is %f\n", avg);
return 0;
}
void avgsum(int a,int b, int *sum,float *avg)
{
*sum = a + b;
*avg = (float)(*sum)/2;
}