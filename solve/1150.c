#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,x,y,sum=0,a=0;
	scanf("%d",&x);
	do
	{
		scanf("%d",&y);
		
	}
	while(y<=x);
	for(i=x;;i++)
	{
		sum+=i;
		a++;
		if(sum>y)
		{
			break;
		}
	}
	printf("%d\n",a);
	return 0;
}
