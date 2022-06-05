#include<stdio.h>
main( )
{
char string [ ] = "HELLOBROTHER", p;
for (p = 0; string[p] ; p++ )
if (p%2)
printf ("%c", string[p]);
}