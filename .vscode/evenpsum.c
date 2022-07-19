#include<stdio.h>
int main()
{
    long long t,ans,a,b,aeven,aodd,beven,bodd;
    scanf("%lld", &t);
    for(int i=1;i<=t;i++)
    {
scanf("%lld", &a);
scanf("%lld", &b);
aeven=a/2;
aodd=(a-aeven);
beven=b/2;
bodd=(b-beven);
ans=(aeven*beven)+(aodd*bodd);
printf("%lld\n", ans);
    }
    return 0;
}