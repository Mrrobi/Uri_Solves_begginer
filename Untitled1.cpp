#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int ara[7],temp[7],i,j,dup=1,count=0,copy;

    for(i=0;i<6;i++){
        cin>>ara[i];
    }
    sort(ara,ara+6);

    for(i=0;i<6;i++){
        if(dup<4){
            
            if(ara[i]==ara[i+1]){
                dup++;
                copy=ara[i];
            }
            else{
                temp[i]=ara[i];
                count++;
            }
        }
    }
    int min=temp[0];
    for(i=0;i<count;i++){
        if(temp[i]<min){
            min=temp[i];
        }
    }
    cout<<dup<<endl;
    if(dup!=4){
        cout<<"Alien"<<endl;
    }
    else{
        if(min<copy){
            cout<<"Bear"<<endl;
        }
        else{
            cout<<"Elephant"<<endl;
        }
    }
}
