#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a=0,sum=0;
    float avg;
    while(1)
    {
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        sum+=x;
        a++;
    }
    avg=((float)sum/a);
    printf("%.2f\n",avg);
    return 0;
}
