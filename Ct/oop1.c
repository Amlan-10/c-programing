#include<stdio.h>
float sum(float,float);
float mul(float,float);
float divide(float,float);
int main(){
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Sum is %0.2f\n",sum(a,b));
    printf("Muliplication is %0.2f\n",mul(a,b));
    printf("Division is %0.2f\n",divide(a,b));
}
float sum(float a,float b){
    return a+b;
}
float mul(float a,float b){
    return a*b;
}
float divide(float a,float b){
    return a/b;
}