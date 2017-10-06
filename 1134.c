#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d,i;
	while(1)
	{
		scanf("%d",&i);
		if(i==1)
		{
			a++;
			continue;
		}
		else if(i==2)
		{
			b++;
			continue;
		}
		else if(i==3)
		{
			c++;
			continue;
		}
		else if(i>4)
		{
		
			continue;
		}
		else if(i==4)
		{
			break;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",a);
	printf("Gasolina: %d\n",b);
	printf("Diesel: %d\n",c);
return 0;
	
}
