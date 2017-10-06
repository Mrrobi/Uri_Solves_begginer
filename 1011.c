#include<stdio.h>
#include<math.h>
#define pi 3.14159
 main()
{
    
    double R,sum;
    scanf("%lf",&R);
    
    sum=((4/3.0)*pi*pow(R,3));
    printf("VOLUME = %.3lf\n",sum);
    return 0;
}
