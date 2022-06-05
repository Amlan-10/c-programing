#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    char name[] = {"Amlan Tribedi"};
    char mname[strlen(name)];
    int sp=-1;
    for(int i=strlen(name)-1;i>=0;i--)
    {
        if(name[i]==' ')
        {
            sp=i;
            break;
        }
    }
    printf("Length of Surname : %d\n",strlen(name)-(sp+1));
    for(int i=0;i<strlen(name);i++)
    {
        mname[i]=name[i];
    }
    for(int i=1;i<strlen(name)-1;i++)
    {
        if((int)name[i]==32)
        mname[i]='0';
    }
    if((int)mname[0]>=65 && (int)mname[0]<=90)
    mname[0]=(char)(((int)mname[0])+32);
    if((int)mname[strlen(mname)]>=97 && (int)mname[strlen(mname)]<=90)
    mname[strlen(mname)]=(char)(((int)mname[strlen(mname)])-32);
    printf("%s\n",mname);
    for(int i=strlen(name)-1;i>=0;i--)
    {
        printf("%c",mname[i]);
    }
    return 0;
}
