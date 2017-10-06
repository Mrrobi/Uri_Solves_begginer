#include<stdio.h>
 main()
{
    char  name[100];
    double b,c,part=15,x,sum;
	scanf("%s",&name);
	scanf("%lf",&b);
    scanf("%lf",&c);
    x=((part/100)*c);
    
	sum=(b+x);
    printf("TOTAL = R$ %.2lf\n",sum);
	return 0;
}
