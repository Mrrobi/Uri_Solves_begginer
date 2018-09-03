#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=0,n;
    scanf("%d",&n);
	for(i=n;;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			a++;
			if(a==6)
			{
				break;
			}
		}
	}
    return 0;
}
