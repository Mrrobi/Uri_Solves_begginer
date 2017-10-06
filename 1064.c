#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a[5],j,b=0,sum=0,avg;
   int i;
   for(i=0;i<6;i++)
   {
       scanf("%f",&a[i]);
   }
   for(i=0;i<6;i++)
   {
       if(a[i]>0)
       {
sum+=a[i];
     b++;
     }

   }
   avg=(sum/(float)b);
   printf("%.0f valores positivos\n",b);
   printf("%.1f\n",avg);
   return 0;
}
