#include<stdio.h>
int main()
{
    int a[10];
    int i,v,x;
    scanf("%d",&v);
    a[0]=v;
    for(i=1;i<10;i++)
    {
        x=v*2;
        a[i]=x;
        v=x;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}
