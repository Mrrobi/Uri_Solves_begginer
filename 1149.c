#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum=0,i,a=0;
    scanf("%d %d",&x,&y);
    while(y<=0)
    {
        scanf("%d",&y);
    }
    if(y>0)
        {for(i=x;;i++)
    {
        sum+=i;
        a++;
        if(a==y)
        {
            break;
        }
    }}
    printf("%d\n",sum);
    return 0;
}
