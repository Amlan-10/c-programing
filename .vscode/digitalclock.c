#include<stdio.h>
#include<windows.h>
int main()
{
int h,m,s;
int d=1000;//delays time by 1000 milliseconds
printf("Set time:\n");
scanf("%d%d%d",&h,&m,&s);
if(h>12 || m>60 || s>60)
{
    printf("Error!");
exit(0);//exit the program
}
while(1){//infinite loop
    s++;
    if(s>59)
    {
        m++;
        s=0;
    }
    if(m>59){
    h++;
    m=0;}
    if(h>12){
    h=1;}
    printf("\nClock :");
    printf("\n %02d:%02d:%02d",h,m,s);
    Sleep(d);//makes the program efficient(it basically slows down the while loop)
    system("cls");//clears screen
}
return 0;
}