#include<stdio.h>
int main()
{
	int i,j;
	for(j=60,i=1;j>=0,i<=60;j-=5,i+=3)
			{
				printf("I=%d J=%d\n",i,j);
				if(j==0)
				{
					break;
				}
			}
	
			return 0;
}
