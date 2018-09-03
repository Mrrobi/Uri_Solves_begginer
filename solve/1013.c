#include<stdio.h>
#include<math.h>
 main()
 {
    int A,B,C,X,X1;
    scanf("%d %d %d",&A,&B,&C);
    X=((A+B+abs(A-B))/2);
	X1=((B+C+abs(B-C))/2);
	if(X>X1)
	{
		printf("%d eh o maior\n",X);
	}
	else
	{
		printf("%d eh o maior\n",X1);
	}
    
       return 0;
}
