#include<stdio.h>

int main(){
	float m[12][12];
	int i,j;
	float sum=0;
	char ch;
	scanf("%c",&ch);
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f",&m[i][j]);
		}
	}
	for(i=1;i<12;i++){
		for(j=0;j<i;j++){
			sum+=m[i][j];
		}
	}
	if(ch=='S')printf("%.1f\n",sum);
	else if(ch=='M')printf("%.1f\n",(sum/66));
	return 0;
}
