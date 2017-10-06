#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
return 0;
}

