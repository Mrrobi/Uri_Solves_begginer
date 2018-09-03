#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,j,b=0,sum=0,avg;
   int i;
   for(i=1;i<=5;i++)
   {
       scanf("%d",&a);


       if(a%2==0)
        {
            b++;

        }

   }

   printf("%d valores pares\n",b);

   return 0;
}
