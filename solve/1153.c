#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    if(n>0&&n<13)
    {
        for(i=1;i<=n;i++)
        {
            sum*=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
