#include<stdio.h>

int main(){
	double m[12][12];
	int i,j;
	double sum=0.0;
	char ch;
	int c=5,d=6;
	scanf("%c",&ch);
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
			scanf("%lf",&m[i][j]);
		
	}
	
	for(j=7;j<=11;j++){
		for(i=c;i<=d;i++)
			sum+=m[i][j];
			c--;
			d++;
		
	}
	if(ch=='S')printf("%.1lf\n",sum);
	else if(ch=='M')printf("%.1lf\n",(sum/30));
	return 0;
}
