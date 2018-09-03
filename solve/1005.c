#include<stdio.h>
int main()
{
	double a=3.5,b=7.5,X,A,B,a1,b1;
	scanf("%lf",&A);
	scanf("%lf",&B);
	a1=a*A;
	b1=B*b;
	X=((a1+b1)/(a+b));
	printf("MEDIA = %.5lf\n",X);
	return 0;
}
