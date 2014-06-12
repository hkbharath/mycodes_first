#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,v;
  cin>>n>>v;
  int fs[3002]={0};
  int x,y;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    fs[x]+=y;
  }
  int sol=0;
  for(int i=1;i<=3001;i++){
    if(fs[i]+fs[i-1]<=v){
      sol+=fs[i]+fs[i-1];
      fs[i]=0;
    }
    else if(fs[i-1]<=v){
      sol+=fs[i-1];
      int var = v-fs[i-1];
      sol+=var;
      fs[i]-=var;
    }
    else
      sol+=v;
  }
  cout<<sol;
}
