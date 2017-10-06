#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,x,y,i,j;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a=0;
		int sum=0;
		scanf("%d %d",&x,&y);
		for(j=x;;j++)
		{
		
		if(j%2!=0)
		{
			sum+=j;
			a++;
			
		}
		if(a==y)
			{
				break;
		 }
		}
		printf("%d\n",sum);
	}
	return 0;
}
