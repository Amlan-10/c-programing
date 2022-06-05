#include <stdio.h>

int fib(int n_am)
{
    if (n_am <= 1)
    {
        return n_am;
    }
    return fib(n_am - 1) + fib(n_am - 2);
}
int sum(int a_am, int b_am)
{
    int sum_am = 0;
    sum_am = a_am + b_am;
    return sum_am;
}

int main()
{
    int rn_am;
    printf("Enter the roll number :");
    scanf("%d", &rn_am);
    int m_am = rn_am % 10 + 1;
    int n_am = rn_am % 5 + 11;
    int f1_am = fib(m_am);
    int f2_am = fib(n_am);
    int su_am = sum(f1_am, f2_am);
    printf("F(m) = %d\n", f1_am);
    printf("F(n) = %d\n ", f2_am);
    printf("SUM of m and n fibonacci is %d\n", su_am);
    return 0;
    }