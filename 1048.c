#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,insal;
    int per;
    scanf("%f",&sal);
    if(sal>0&&sal<=400.00)
    {
        insal=(sal*.15);
        printf("Novo salario: %.2f\n",sal+insal);
        printf("Reajuste ganho: %.2f\n",insal);
        printf("Em percentual: 15 %c\n",'%');
    }
    else if(sal>=400.01&&sal<=800.00)
    {
        insal=(sal*.12);
        printf("Novo salario: %.2f\n",sal+insal);
        printf("Reajuste ganho: %.2f\n",insal);
        printf("Em percentual: 12 %c\n",'%');
    }
    else if(sal>=800.01&&sal<=1200.00)
    {
        insal=(sal*.1);
        printf("Novo salario: %.2f\n",sal+insal);
        printf("Reajuste ganho: %.2f\n",insal);
        printf("Em percentual: 10 %c\n",'%');
    }
    else if(sal>1200.01&&sal<=2000.00)
    {
        insal=(sal*.07);
        printf("Novo salario: %.2f\n",sal+insal);
        printf("Reajuste ganho: %.2f\n",insal);
        printf("Em percentual: 7 %c\n",'%');
    }
    else if(sal>2000.00)
    {
        insal=(sal*.04);
        printf("Novo salario: %.2f\n",sal+insal);
        printf("Reajuste ganho: %.2f\n",insal);
        printf("Em percentual: 4 %c\n",'%');
    }
    return 0;

}

