#include<stdio.h>
 main()
{
    int a,b,a1,b1;
    double c,c1,sum;
    scanf("%d %d %lf",&a,&b,&c);
    scanf("%d %d %lf",&a1,&b1,&c1);
    sum=((b*c)+(b1*c1));
    printf("VALOR A PAGAR: R$ %.2lf\n",sum);
    return 0;
}
