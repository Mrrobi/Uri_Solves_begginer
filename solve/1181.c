#include<stdio.h>

int main()
{
	int i,j;
	int a;
	char ch[2];
	double m[12][12],sum=0.00,avg;
	scanf("%d",&a);
	scanf("%s",&ch);
	for(i=0;i<12;i++)
	{
		for(j=0; j<12; j++)
		{
			scanf("%lf", &m[i][j]);
		}
	}
	if(ch[0]=='M')
	{
		for(i=0; i<12; i++)
		{
			sum+=m[a][i];
		}
		avg=sum/12.00;
		printf("%.1lf\n",avg);
	}
	else if(ch[0]=='S')
	{
		for(i=0; i<12; i++)
		{
			sum+=m[a][i];
		}
		printf("%.1lf\n",sum);
	}
	return 0;
}

