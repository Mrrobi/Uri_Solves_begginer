#include <stdio.h>

int main(void) {
	// your code goes here
	int i,a,b,temp1,temp2,sum1=0,sum2=0;
	int first=0,sec=0,draw=0;
	int game=0;
	while(1)
	{
	    scanf("%d %d",&a,&b);
	    game++;
	    temp1=a;
	    temp2=b;
	    sum1+=temp1;
	    sum2+=temp2;
	    if(a>b)
	    {
	        first++;
	    }
	    else if(a<b)
	    {
	        sec++;
	    }
	    else if(a==b)
	    {
	        draw++;
	    }
	    
	    printf("Novo grenal (1-sim 2-nao)\n");
	    scanf("%d",&i);
	    if(i==1)
	    {
	        continue;
	    }
	    else if(i==2)
	    {
	        printf("%d grenais\n",game);
	        printf("Inter:%d\n",first);
	        printf("Gremio:%d\n",sec);
	        printf("Empates:%d\n",draw);
	        if(first>sec)
	        {
	            printf("Inter venceu mais\n");
	        }
	        else if(sec>first)
	        {
	          printf("Gremio venceu mais\n");  
	        }
	        else
	        printf("Não houve vencedor\n");
	        break;
	        
	    }
	}
	return 0;
}
