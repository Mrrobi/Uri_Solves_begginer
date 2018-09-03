#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,i,a=0,sum=0;
	while(1)
	{
		scanf("%d",&x);
		if(x==0)
		{
			break;
		}
		else
		for(i=x;a<5;i++)
		{
			if(i%2==0)
			{
				sum+=i;
				a++;
				
			}
		}
		printf("%d\n",sum);
		sum=0;
		a=0;
	}
	return 0;
}
