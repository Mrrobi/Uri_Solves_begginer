#include <stdio.h>
#include <stdlib.h>

int main()
{
   long int N,X,IN=0,OUT=0;
   long int i;
   scanf("%ld",&X);
   for(i=1;i<=X;i++)
   {
   	scanf("%ld",&N);
   	if(N>=10&&N<=20)
   	{
   		IN++;
	   }
	   else
	   {
	   	OUT++;
	   }
   }
   printf("%ld in\n%ld out\n",IN,OUT);
    return 0;
}
