#include<bits/stdc++.h>

using namespace std;
int check(int i);
int arr(int n);

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        int r = arr(a);
        cout<<r<<endl;
    }
}
int arr(int n){
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=max_element(arr,arr+n)-arr;
    int high=check(arr[max]);
    return high;
}
int check(int i){
    if(i<10){
        return 1;
    }
    else if(i>=10&&i<20){
        return 2;
    }
    else if(i>=20){
        return 3;
    }
}
