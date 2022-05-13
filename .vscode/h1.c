void swapByRef(int *x,int*y,int n)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n x=%d & y=%d",*x,*y);
}
int main()
{
    int a=10,b=20;
printf("\n a = %d &b =5d,a,b");
swapByref(&a,&b);
printf("\n a=%d &b=%d",a,b);
return 0;
}