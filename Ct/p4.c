/* Write contents of an array to a file */
#include<stdio.h>
int main()
{
	FILE *fp;
	int i,a[10]={2,4,5,6,1,3,5,7,9,0};
	fp=fopen("data.out","w");
	for(i=0;i<10;i++)
	fprintf(fp," %d",a[i]);
	fclose(fp);
	return 0;
}