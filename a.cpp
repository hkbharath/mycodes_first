#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,v;
  cin>>n>>v;
  vector<int> sol;
  int k,ar[50][51];
  for(int i=0;i<n;i++){
    cin>>ar[i][0];
    for(int j=1;j<=ar[i][0];j++)
      cin>>ar[i][j];
  }
  for(int i=0;i<n;i++)
    for(int j=1;j<=ar[i][0];j++){
      //cout<<ar[i][j];
      if(ar[i][j]<v){
	sol.push_back(i);
	break;
      }
    }
  cout<<sol.size()<<endl;
  for(int i=0;i<sol.size();i++)
    cout<<sol[i]+1<<" ";

}
