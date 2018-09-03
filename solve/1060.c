#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a[5],j,b=0;
   int i;
   for(i=0;i<6;i++)
   {
       scanf("%f",&a[i]);
   }
   for(i=0;i<6;i++)
   {
       if(a[i]>0)
       {
           b++;
       }
   }
   printf("%.0f valores positivos\n",b);
   return 0;
}
