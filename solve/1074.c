#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,x[10000];
   int i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   		scanf("%d",&x[i]);
   }
   for(i=1;i<=n;i++)
   {
   		if(x[i]==0)
   		{
   			printf("NULL\n",x[i]);
		}
		else if(x[i]>0&&x[i]%2!=0)
		{
			printf("ODD POSITIVE\n",x[i]);
		   }
		   else if(x[i]>0&&x[i]%2==0)
		{
			printf("EVEN POSITIVE\n",x[i]);
		   }
		   else if(x[i]<0&&x[i]%2!=0)
		{
			printf("ODD NEGATIVE\n",x[i]);
		   }
		   else if(x[i]<0&&x[i]%2==0)
		{
			printf("EVEN NEGATIVE\n",x[i]);
		   }   
   }
    return 0;
}
