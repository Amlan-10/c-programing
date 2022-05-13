#include <stdio.h>
int max(int n)
{
    int next_num, largest = 0,leader=0,c=0,i;
    printf("Enter theh value of n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &next_num);
        if (next_num > largest)
            largest = next_num;
            leader = largest;
            c++;
    }
    return (largest);
    return (c);
}

int main()
{
    int a,b,n;
   a= max(n);
    return (a);
    
}