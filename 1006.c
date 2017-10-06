#include<stdio.h>
int main()
{
	double a=2,b=3,c=5,X,A,B,C,a1,b1,c1;
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	a1=a*A;
	b1=B*b;
	c1=C*c;
	X=((a1+b1+c1)/(a+b+c));
	printf("MEDIA = %.1lf\n",X);
	return 0;
}
