#include <stdio.h>


int main()

{

    int n,h,m,s;

    scanf("%d",&n);

    h=n/(60*60);

    m=(n%(60*60))/60;

    s=(n%(60*60))%60;

    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
