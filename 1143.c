#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b;
	int i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i;;k=i)
		{
			a=pow(k,2);
			b=pow(k,3);
			printf("%d %d %d\n",k,a,b);
			break;	
		}
	}
	return 0;
}
