#include<stdio.h>
#include<math.h>
#define pi 3.14159
 main()
 {
    double A,B,C,A1,A2,A3,A4,A5;
    scanf("%lf %lf %lf",&A,&B,&C);
    A1=0.5*A*C;
    A2=pi*pow(C,2);
    A3=(0.5*(A+B)*C);
    A4=B*B;
    A5=A*B;
    printf("TRIANGULO: %.3lf\n",A1);
    printf("CIRCULO: %.3lf\n",A2);
    printf("TRAPEZIO: %.3lf\n",A3);
    printf("QUADRADO: %.3lf\n",A4);
    printf("RETANGULO: %.3lf\n",A5);
    return 0;
}
