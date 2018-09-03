#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99];
    int i;
    int max=0,position=0;
    for(i=0;i<100;i++)
    {
    	scanf("%d",&a[i]);
    	
    	if(max<a[i])
    	{
    		max=a[i];
    		position=i+1;
		}
	}
	printf("%d\n%d\n",max,position);
    return 0;
}
