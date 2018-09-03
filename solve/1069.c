#include<stdio.h>
#include<string.h>

int main(){
    char ch[1000];
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int count1=0,count2=0;
        scanf(" %[^\n]s",ch);
        int l = strlen(ch);
        for(j=0;j<l;j++){
            if(ch[j]=='<'){
                for(k=j;k<l;k++){
                    if(ch[k]=='>'){
                        ch[k]=',';
                        count1++;
                        break;
                    }
                }

            }
            
        }
        printf("%d\n",count1);
        memset(ch,'0',sizeof ch); 
    }
    
}
