#include<stdio.h>
int main()
{
	int a[20],b[20];
	int i,j=19;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		b[j]=a[i];
		j--;
	}
	
	for(j=0;j<20;j++)
	{
		printf("N[%d] = %d\n",j,b[j]);
	}
	return 0;
}
