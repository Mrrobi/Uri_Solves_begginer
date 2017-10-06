#include<stdio.h>
#include<stdlib.h>
int main()
{
	float X,sum=0;
	int a=0;
	while(1)
	{
		scanf("%f",&X);
		if(X<0||X>10)
		{
			printf("nota invalida\n");
			continue;
		}
		else if(X>=0||X<=10)
		{
			sum+=X;
			a++;
			if(a==2)
			{
				break;
			}
		}
		
	}
	printf("media = %.2f\n",(sum/2));
	return 0;
}
