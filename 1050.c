#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[7]={61,71,11,21,32,19,27,31};
   int n;
   scanf("%d",&n);
   if(n==a[0])
   {
       printf("Brasilia\n");
   }
   else if(n==a[1])
   {
       printf("Salvador\n");
   }
   else if(n==a[2])
   {
       printf("Sao Paulo\n");
   }
   else if(n==a[3])
   {
       printf("Rio de Janeiro\n");
   }
   else if(n==a[4])
   {
       printf("Juiz de Fora\n");
   }
   else if(n==a[5])
   {
       printf("Campinas\n");
   }
   else if(n==a[6])
   {
       printf("Vitoria\n");
   }
   else if(n==a[7])
   {
       printf("Belo Horizonte\n");
   }
   else
    printf("DDD nao cadastrado\n");
   return 0;
}
