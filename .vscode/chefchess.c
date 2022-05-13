#include <stdio.h>

int main(void) {
int T,N,ans;
scanf("%d",&T);
while(T>0){
    scanf("%d", &N);
    ans=0;
    for(int i=1;i<=N;i=i+2)
    {
        ans +=(N-i+1)*(N-i+1);
    }T--;
    printf("%d\n",ans);
}
	return 0;
}

