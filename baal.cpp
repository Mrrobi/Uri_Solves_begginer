#include<bits/stdc++.h>
#define f fflush(stdin)
using namespace std;
void output(struct student std[]);
int i,j,m=0,index[4]={0};

struct student{
  char name[30];
  int roll;
  char fname[30];
  int marks[4];
};
void maxmarks(struct student std[],int n){
  for(j=1;j<=3;j++){
  	m=0;
    for(i=1;i<=n;i++){
      if(std[i].marks[j]>=m){
        index[j]=i;
        m=std[i].marks[j];

      }
    }
  }

}

int main()
{
  int n;
  struct student std[30];
  cin>>n;
  for(i=1;i<=n;i++){
    cin>>std[i].name;
    cin>>std[i].roll;
   cin>>std[i].fname;
   for(j=1;j<=3;j++){
     cin>>std[i].marks[j];
   }
  }
  maxmarks(std,n);
  output(std);
}
void output(struct student std[]){
  for(i=1;i<=3;i++){
    cout<<std[index[i]].name<<endl;
    cout<<std[index[i]].roll<<endl;
    cout<<std[index[i]].fname<<endl;
  }
}

