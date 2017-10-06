#include<stdio.h>

main()
{
	int i,j,n;
	int a[1000];
	scanf("%d",&n);
	if(n>=2&&n<=50)
	{
		j=0;
	for(i=0;i<1000;i++)
	{
		a[i]=j;
		j++;
		if(j==n)
		{
			j=0;
		}
		printf("N[%d] = %d\n",i,a[i]);
	}
	}
	return 0;
}
