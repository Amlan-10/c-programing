#include <stdio.h>
int main()
{
    float P, Q, R, S;
    printf("Enter the value of P,Q,R,S\n");
    scanf("%f %f %f %f",&P,&Q,&R,&S);
    if (P * S == R * Q)
    {
        printf("The wheatstones bridge is balanced\n");
    }
    else
    {
        printf("The wheatsones bridge is not balanced\n");
        S = (R * Q) / P;
        printf("Choose S = %0.2f to balance the bridge\n", S);
    }
    return 0;
}