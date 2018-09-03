#include<stdio.h>
main()
{    
    long long int a;
    scanf("%lld",&a);
printf("%lld\n",a);
printf("%lld nota(s) de R$ 100,00\n",a/100);
a%=100;
printf("%lld nota(s) de R$ 50,00\n",a/50);
a%=50;
printf("%lld nota(s) de R$ 20,00\n",a/20);
a%=20;
printf("%lld nota(s) de R$ 10,00\n",a/10);
a%=10;
printf("%lld nota(s) de R$ 5,00\n",a/5);
a%=5;
printf("%lld nota(s) de R$ 2,00\n",a/2);
a%=2;
printf("%lld nota(s) de R$ 1,00\n",a);
    return 0;
}
