#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    float s=0.00;
    for(i=1;i<=100;i++)
    {
        s+=(1/(float)i);
    }
    printf("%.2f\n",s);
    return 0;
}
