#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    int arr[100][100],n,n1;
    while((scanf("%d",&n))!=EOF){
        
    n1=n-1;
    if(n%2!=0){
        int k = n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i&&i!=k){
                arr[i][j]=1;
                //cout<<arr[i][j]<<endl;
            }
            else if(j==n1-i){
                arr[i][j]=2;
                //cout<<arr[i][j]<<endl;
            }
            else
                arr[i][j]=3;
                //cout<<arr[i][j]<<endl;
        }
    }
    }
    else if(n%2==0){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i){
                arr[i][j]=1;
                //cout<<arr[i][j]<<endl;
            }
            else if(j==n1-i){
                arr[i][j]=2;
                //cout<<arr[i][j]<<endl;
            }
            else
                arr[i][j]=3;
                //cout<<arr[i][j]<<endl;
        }
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<""<<endl;
    }
    } 
}
