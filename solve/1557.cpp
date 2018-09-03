#include<bits/stdc++.h>


using namespace std;
int dg(int x){
    int b=0;
    while(x){
        x/=10;
        b++;
    }
    return b;
    
}

int main(){
    int arr[100][100],n;
    while(1){
        cin>>n;
        if(n==0){
            break;
        }
        else{
            int k,o;
            for(int i=1;i<=n;i++){
                
                if(i==1){
                    k=i;
                }
                else{
                    k=o;
                }
                for(int j=1;j<=n;j++){
                    arr[i][j]=k;
                    
                    //cout<<k<<endl;
                    if(j==2){
                        o=k;
                        //cout<<o<<endl;
                    }
                    k=k+k;
                }
            }
            int l= n;
            int d = dg(arr[l][l]);
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(j==1){
                        int e = dg(arr[i][j]);
                        int g = d-e;
                        for(int k=1;k<=g;k++)
                            printf(" ");
                        printf("%d",arr[i][j]);
                    }
                    else{
                        int e = dg(arr[i][j]);
                        int g = d-e;
                        for(int k=1;k<=g;k++)
                            printf(" ");
                        printf(" %d",arr[i][j]);
                    }
                }
                cout<<""<<endl;
            }
            cout<<""<<endl;
        }
    }
}
