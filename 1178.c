#include<stdio.h>

main()
{
	double N[100];
	int i;
	double X,j;
	scanf("%lf",&X);
	j=X;
	for(i=0;i<100;i++)
	{
		N[i]=j;
		j=j/2;
		printf("N[%d] = %.4lf\n",i,N[i]);
	}
	return 0;
}
