#include<stdio.h>
int main()
{
	int n;
	int i,j,k=3,o=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=o;j<=k;j++)
		{
			printf("%d ",j);
		}
		printf("PUM\n");
		o+=4;
		k+=4;
	}
	return 0;
}
