#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0,i;
	scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
    	for(b=b+1;b<a;b++)
    	{
    		if(b%2!=0)
    		{
    			sum+=b;
			}
		}
		printf("%d\n",sum);
		
	}
	else if(b>a)
	{
	
		for(a=a+1;a<b;a++)
		{
			if(a%2!=0)
			{
				sum+=a;
			}
		}
		printf("%d\n",sum);
	}
	else if(a==b)
	{
		printf("%d\n",a);
	}
	
    return 0;
}
