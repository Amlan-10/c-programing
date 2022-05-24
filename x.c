#include<stdio.h>
void test(int *);

int main(){
    int x=30;
    test(&x);
    printf("%d\n",x);
    return 0;
}
void test(int *p)
{
    *p=*p-3;
}

