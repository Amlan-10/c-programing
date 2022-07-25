#include<stdio.h>
union student
{
int rollno;
char gender;
int marks;
}s1;

int main()
{
s1.rollno=50;
s1.marks=80.0;
printf("%d",s1.rollno);
return 0;
}