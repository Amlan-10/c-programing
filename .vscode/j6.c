#include<stdio.h>
void func( )
{
int x = 1;
static int y = 2;
x++; y--;
printf( "%d -- %d ", x, y );
}
int main()
{
func();
func();
return 0;
}